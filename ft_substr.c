/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phernand <phernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 17:40:09 by phernand          #+#    #+#             */
/*   Updated: 2020/10/08 18:03:52 by phernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *res;

	if(!s || !(res = (char *)malloc(sizeof(char) * (len +1)))
		return (NULL);
	if(ft_strlen(s) < start)
	{
		res[0] = '\0';
		return (res);
	}
	i = 0;
	while(i < len && s[start + i])
		res[i] = s[start + i++];
	res[i] = '\0';

	return (res);
}
