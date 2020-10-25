/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phernand <phernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 19:43:46 by phernand          #+#    #+#             */
/*   Updated: 2020/10/25 18:27:09 by phernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**free_parts(char **parts, int i)
{
	while (i >= 0)
		free(parts[i--]);
	free(parts);
	return (NULL);
}

static int		parts_count(char const *str, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] == c)
		i++;
	while (str[i])
	{
		while(str[i] && str[i] == c)
			i++;
		if(str[i] && str[i] != c)
		{
			count++;
			while(str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static char		*get_part(char const *str, char c)
{
	int		i;
	char	*res;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	if (!(res = malloc(sizeof(char) * i + 1)))
	{
		free(res);
		return (NULL);
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
	char	**res;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	if (!(res = malloc(sizeof(*res) * (parts_count(s, c) + 1))))
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			if (!(res[i] = get_part(s, c)))
				return (free_parts(res, i));
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	res[i] = NULL;
	return (res);
}
