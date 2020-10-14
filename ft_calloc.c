/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phernand <phernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:01:53 by phernand          #+#    #+#             */
/*   Updated: 2020/10/14 20:29:57 by phernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc( size_t elementCount, size_t elementSize)
{
 	void *a;
	if (elementCount == 0 || elementSize == 0)
		elementCount = elementSize = 1; 
	if (!(a = malloc (elementCount * elementSize)))
		return (NULL);
	ft_bzero (a, elementCount * elementSize);
	return (a);  
}
