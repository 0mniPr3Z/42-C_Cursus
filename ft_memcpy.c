/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phernand <phernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 16:06:35 by phernand          #+#    #+#             */
/*   Updated: 2020/10/23 19:51:40 by phernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{

	if(!dst || !src)
		return (0);
	if (dst == src || n == 0)
		return (dst);
	while (n > 0)
	{
		*dst = *src;
		n--;
	}
	return (dst);
}
