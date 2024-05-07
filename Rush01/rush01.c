/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mir.jakub <mir.jakub@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 12:17:38 by abadun            #+#    #+#             */
/*   Updated: 2024/03/17 14:15:37 by mir.jakub        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	write(1, str, 7);
	write(1, "\n", 1);
}

int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;

	str1 = "1 2 3 4";
	str2 = "2 3 4 1";
	str3 = "3 4 1 2";
	str4 = "4 1 2 3";
	ft_putstr(str1);
	ft_putstr(str2);
	ft_putstr(str3);
	ft_putstr(str4);
	return (0);
}
