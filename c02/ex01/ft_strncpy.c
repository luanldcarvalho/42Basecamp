char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (src[index] != '\0' && n > index)
	{
		dest[index] = src[index];
		index++;
	}
	while (n > index)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
