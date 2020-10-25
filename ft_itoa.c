/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phernand <phernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 20:30:33 by phernand          #+#    #+#             */
/*   Updated: 2020/10/25 18:05:07 by phernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_intlen(unsigned int value)
{
	int len;

	len = 1;
	while(value >= 10)
	{
		len++;
		value /= 10;
	}
  return (len);
}

char			*ft_itoa(int n)
{
	int				len;
	unsigned int	value;
	char			*str;
	
	len = 0;
	if (n < 0)
	{
		value = n * -1;
		len++;
	}
	else
		value = n;
	len += ft_intlen(value);
	if (!(str = malloc(sizeof(char) * len + 1)))
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		
		str[len] = (value % 10) + '0';
		if(len == 0 && n < 0)
			str[len] = '-';
		value /= 10;
	}
	return (str);
}
