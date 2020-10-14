/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phernand <phernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 13:26:26 by phernand          #+#    #+#             */
/*   Updated: 2020/10/13 21:01:43 by phernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	
	i = 0;
	while(i < dstsize && src[i])
		dst[i] = src[i++];
	dst[i] = '\0';
	return (i);
}
