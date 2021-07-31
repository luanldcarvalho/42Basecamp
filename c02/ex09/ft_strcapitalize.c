int	isNotAlpha(char c)
{
	if ((c < '0' || c > '9')
		&& (c < 'A' || c > 'Z')
		&& (c < 'a' || c > 'z'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

char	toLower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

char	toUpper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	char	*start;

	start = str;
	*str = toUpper(*str);
	str++;
	while (*str != '\0')
	{
		if (isNotAlpha(*(str - 1)) == 0)
		{
			*str = toUpper(*str);
		}
		else
		{
			*str = toLower(*str);
		}
		str++;
	}
	return (start);
}
