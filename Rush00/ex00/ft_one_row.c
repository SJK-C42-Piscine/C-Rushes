
void ft_putchar(char c);

void ft_one_row(int y)
{
    int i;
    i = 1;
    ft_putchar('/');
    while (i < y-1)
    {
        ft_putchar('*');
        i++;
    };

    ft_putchar('\\');
}

