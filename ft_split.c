/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phernand <phernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 19:43:46 by phernand          #+#    #+#             */
/*   Updated: 2020/10/21 17:40:11 by phernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**free_parts(char **parts, int i)
{
	while (i > 0)
		free(parts[i--]);
	free(parts);
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
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char			**ft_split(char const *s, char c)
{
	char	** res;
	int		i;
	char	*str;
	
	str = (char *)s;
	if (!str)
		return (0);
	i = 0;
	if (!(res = malloc(sizeof(char *) * part_count(str, c) + 1)))
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
