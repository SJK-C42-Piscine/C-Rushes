/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3digi.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 21:55:02 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/24 23:21:06 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *src);
void	ft_find_multiplier(int power, int num);
int	ft_atoi(char *str);


int is_valid_character(char c)
{
    return (c >= '0' && c <= '9') || c == ' ' || c == '-';
}

void extract_three_chars(char *str, char *result, int *remaining_length) 
{
    int	i, j;
    int str_len = ft_strlen(str);

    int leading_zeros = (str_len % 3 != 0) ? (3 - (str_len % 3)) : 0;

    for (i = 0; i < leading_zeros; i++) {
        result[i] = '0';
    }
    j = leading_zeros;

    for (i = 0; j < 3 && i < str_len; j++, i++) 
	{
        if (is_valid_character(str[i])) 
		{
            result[j] = str[i];
        } 
	else 
	{
            j--;
        }
    }
    result[j] = '\0'; 
    *remaining_length = str_len - i;
    memmove(str, str + i, *remaining_length + 1); 
}

void process_string(char *str) {
    char result[4];
    int remaining_length;

    while (ft_strlen(str) >= 3) 
    {
        extract_three_chars(str, result, &remaining_length);
	ft_find_multiplier(remaining_length, ft_atoi(result));
    }

}
