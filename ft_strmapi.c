char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*loc;

	if (!s || !(loc = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (0);
	i = 0;
	while (s[i])
	{
		loc[i] = (*f)(i, s[i]);
		i++;
	}
	loc[i] = '\0';
	return (loc);
}
