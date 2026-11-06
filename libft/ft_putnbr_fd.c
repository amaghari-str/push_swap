/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 19:24:36 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/20 19:25:14 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;
	char	c;

	nbr = n;
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= 10)
		ft_putnbr_fd(nbr / 10, fd);
	c = (nbr % 10) + '0';
	write(fd, &c, 1);
}
/*
int	main(void)
{
	ft_putnbr_fd(42, 1);
	write(1, "\n", 1);

	ft_putnbr_fd(-42, 1);
	write(1, "\n", 1);

	ft_putnbr_fd(12, 1);
	write(1, "\n", 1);

	ft_putnbr_fd(4238, 1);
	write(1, "\n", 1);


	ft_putnbr_fd(2147483647, 1);
	write(1, "\n", 1);

	ft_putnbr_fd(-2147483648, 1);
	write(1, "\n", 1);

	return (0);
}
*/
