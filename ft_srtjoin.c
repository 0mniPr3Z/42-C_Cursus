# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_srtjoin                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phernand <phernand@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/08 18:07:48 by phernand          #+#    #+#              #
#    Updated: 2020/10/08 18:22:49 by phernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*res;

	if(!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	res = malloc((char *)sizeof(char) * (len + 1));
	if(!res)
		return (NULL);
	 i = 0;
	 j = 0;
	 while (s1[i])
		 res[i] = s1[i++];
	while (s2[j])
		res[i++] = s2[j++];
	res[i] = '\0';
	return (res)
}
