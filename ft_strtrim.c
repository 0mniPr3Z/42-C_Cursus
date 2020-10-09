char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
  while (*s1 && ft_strchr(set, *s1))
		s1++;
	
	while (*s1 && ft_strchr(set, s1[len]))
		len--;
	res = ft_substr(s1, 0, len + 1);
	return (res);
}
