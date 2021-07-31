int	print(char c)
{
	if (c >= 32 && c < 127)
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_printable(char *str)
{
	int	index;

	index = 0;
	if (str[index] == '\0')
		return (1);
	while (str[index] != '\0')
	{
		if (!print((str[index])))
			return (0);
		index++;
	}
	return (1);
}
