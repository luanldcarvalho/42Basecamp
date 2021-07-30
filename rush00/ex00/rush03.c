void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	col;
	int	row;

	row = 0;
	while (row < y && x > 0 && y > 0)
	{
		col = 0;
		while (col < x && x >= 0)
		{
			if (col == 0 && (row == 0 row || row == y - 1))
				ft_putchar('A');
			else
				if (col == x - 1 && (row == 0 || row == y - 1))
					ft_putchar('C');
			else
				if (row == 0 || row == y - 1 || col == 0 || col == x - 1)
					ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		row++;
		ft_putchar('\n');
	}
}
