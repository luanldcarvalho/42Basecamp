void	ft_swap(int *a, int *b)
{
	int	saved;

	saved = *b;
	*b = *a;
	*a = saved;
}
