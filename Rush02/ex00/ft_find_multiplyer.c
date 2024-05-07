/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_multiplyer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mir.jakub <mir.jakub@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 21:55:17 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/24 23:31:36 by mir.jakub        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <math.h>
#include <stdio.h>

void ft_find_in_dict(char str);
char ft_itoa(int nb);

void ft_find_multiplier(int power, int num)
{
    int divisor;
    int multiplier;
    int i;

    i = 0;

    if (num > 0) // Base case: Stop recursion when num becomes 0
    {
        if (power == 0)
            ft_find_in_dict(ft_itoa(num));
        divisor = 1;
        while (i < power)
        {
            divisor *= 10;
            i++;
        }
        multiplier = num / divisor;
        num -= multiplier * divisor;
        power = power - 1;
        if (power <= 1)
            ft_find_in_dict(ft_itoa(multiplier * power));
        else
        {
            ft_find_in_dict(ft_itoa(multiplier));
            ft_find_in_dict(ft_itoa((int)pow(10, power)));
        }
        ft_find_multiplier(power, num);
		printf("%d\n", multiplier);
    }
}

