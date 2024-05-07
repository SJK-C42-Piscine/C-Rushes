void	ft_putchar(char c);

void	ft_one_column(int x)
{
	int q;
	q = 1;
	ft_putchar('/');
	ft_putchar('\n');
	q++;
	
	while (q < x)
	{
		ft_putchar('*');
		ft_putchar('\n');
        	q++;
	}

	if (x == q)
		ft_putchar('\\');
		ft_putchar('\n');
}
