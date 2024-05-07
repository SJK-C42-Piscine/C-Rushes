/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:12:01 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/24 17:13:28 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*str_ptr;
	char	*find_ptr;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		str_ptr = str;
		find_ptr = to_find;
		while (*find_ptr != '\0' && *str_ptr == *find_ptr)
		{
			str_ptr++;
			find_ptr++;
		}
		if (*find_ptr == '\0')
			return (str);
		str++;
	}
	return (0);
}
