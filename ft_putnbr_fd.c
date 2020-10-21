/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phernand <phernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 17:47:51 by phernand          #+#    #+#             */
/*   Updated: 2020/10/21 17:56:36 by phernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	write_nb_fd(int nb, int fd)
{
	nb += 48;
	write(fd, &nb, 1);
}

void	ft_putnbr_fd(int nbr, int fd)
{
	int a;

	if (nbr < 0)
	{
		write(fd, "-", 1);
		if (nbr == -2147483648)
		{
			write(fd, "2", 1);
			ft_putnbr_fd(147483648, fd);
			return ;
		}
		nbr *= -1;
		ft_putnbr_fd(nbr, fd);
	}
	else if (nbr > 9)
	{
		a = nbr / 10;
		ft_putnbr_fd(a, fd);
		a = (nbr % 10);
		write_nb_fd(a, fd);
	}
	else
	{
		write_nb_fd(nbr, fd);
	}
}
