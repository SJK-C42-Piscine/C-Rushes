/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_in_dict.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 21:55:28 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/03/24 23:01:36 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src);
char	*ft_strstr(char *str, char *to_find);
char	**read_dictionary(const char *filename, int *size);
void	ft_putstr(char *str);


void	ft_find_in_dict(char *str)
{
	char	**dict = 0;
	char	word_num;
	char	*print;
	int		dictsize;

	dictsize = 0;
	**dict = **read_dictionary("numbers.dict", &dictsize);
	word_num = *ft_strstr(*dict, str);
	print = ft_strdup(&word_num);
	ft_putstr(print);
}

// int main(int argc, char const *argv[])
// {
// 	/* code */
// 	return 0;
// }
/* int main(void)
{
	char str[] = "123456789";
	char dict[] = "123456789";
	ft_find_dict(str);

	return (0);
} */
