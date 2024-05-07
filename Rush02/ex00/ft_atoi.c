/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mir.jakub <mir.jakub@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:02:07 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/24 21:44:26 by mir.jakub        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	neg_num;

	i = 0;
	num = 0;
	neg_num = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || 
		str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
		++i;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			++neg_num;
		++i;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		++i;
	}
	if (neg_num % 2 == 1)
		num = -num;
	return (num);
}
