/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mir.jakub <mir.jakub@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:12:01 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/24 23:32:19 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define BUF_SIZE 4096

char	**read_dictionary(const char *filename, int *size)
{
	char	**dictionary;
	char	*start;
	char	*end;
	char	*dest;
	char	buf[BUF_SIZE];
	int		fd;
	int		i;
	int		count;
	ssize_t	bytes_read;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (NULL);
	dictionary = malloc(sizeof(char *) * 100);
	if (dictionary == NULL)
	{
		close(fd);
		return (NULL);
	}
	count = 0;
	while ((bytes_read = read(fd, buf, BUF_SIZE)) > 0)
	{
		start = buf;
		end = buf;
		i = 0;
		while (i < bytes_read)
		{
			if (buf[i] == '\n')
			{
				dictionary[count] = malloc(end - start + 1);
				if (dictionary[count] == NULL)
				{
					close(fd);
					free(dictionary);
					return (NULL);
				}
				dest = dictionary[count];
				while (start < end)
					*dest++ = *start++;
				*dest = '\0';
				count++;
				start = end + 1;
			}
			end++;
			i++;
		}
	}
	if (bytes_read == -1)
	{
		close(fd);
		free(dictionary);
		return (NULL);
	}
	close(fd);
	*size = count;
	return (dictionary);
}

void	free_dictionary(char **dictionary, int dict_size)
{
	int	i;

	i = 0;
	while (i < dict_size)
	{
		free(dictionary[i]);
		i++;
	}
}
