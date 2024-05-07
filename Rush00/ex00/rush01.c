void	ft_putchar(char c);

void	ft_only_one_char(void);
void	ft_one_column(int y);
void	ft_one_row(int x);
void	ft_full_box(int x, int y);

void	rush(int x, int y)
{
	if ((x<1) || (y<1))
		 return;
	if ((x==1) && (y==1))
	{
		ft_only_one_char(); // Fedor will do that
	}
	else if (x==1)
	{
		ft_one_column(y); // Orkun will do that
 
	}
	else if (y==1)
	{
		ft_one_row(x);	// Jakub will do that
	}
	else
	{
		ft_full_box(x, y); // We will sync and do together
	}
	ft_putchar('\n');
}


