/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phernand <phernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:03:52 by phernand          #+#    #+#             */
/*   Updated: 2020/10/23 18:18:53 by phernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = ((char *)malloc(sizeof(char) * ft_strlen((char *)s1) + 1));
	if (s2 == NULL)
		return (NULL);
	else
		ft_strlcpy(s2, s1, ft_strlen((char *)s1));
	return (s2);
}
