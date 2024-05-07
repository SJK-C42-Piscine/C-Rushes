/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mir.jakub <mir.jakub@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:15:19 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/24 23:39:51 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src);
int	ft_putstr(char *str);

char	*ft_strdup(char *src)
{
	char	*copy;
	int		len;
	int		j;

	len = ft_strlen(src);
	copy = ((char *)malloc((len + 1) * sizeof(char)));
	if (copy == 0)
		return (0);
	j = 0;
	while (src[j] != '\0')
	{
		copy[j] = src[j];
		j++;
	}
	copy[j] = '\0';
	return (copy);
}
