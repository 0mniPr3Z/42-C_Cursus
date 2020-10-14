static char		**free_parts(char **parts, int i)
{
	while (i > 0)
		free(tab[i--]);
	free(tab);
	return (NULL);
}

static int		part_count(char const *str, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i++] == c);
	while (str[i])
		if ((str[i++] == c && str[i] != c) || str[i] == '\0')
			count++;
	return (count);
}

static char		*get_part(char const *str, char c)
{
	int		i;
	char	*res;

	i = 0;
	while (str[i] && str[i++] != c);
	if (!(res = malloc(sizeof(res) * i + 1)))
	{
		free(res);
		return (0);
	}
	i = 0;
	while (str[i] && str[i] != c)
		res[i] = str[i++];
	res[i] = '\0';
	return (res);
}

char			**ft_split(char const *s, char c)
{
	char	** res;
	int		i;
	int		part;
  char *str;
  
  str = s;
	if (!str)
		return (0);
	i = 0;
	if (!(tab = malloc(sizeof(*res) * part_count(str, c) + 1)))
		return (0);
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str != c)
		{
			if (!(res[i] = get_part(str, c)))
				return (free_parts(res, i));
			i++;
			while (*str != c)
				str++;
		}
	}
	res[i] = NULL;
	return (res);
}
