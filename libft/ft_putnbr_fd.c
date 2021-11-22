/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimarque <mimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 00:42:17 by mimarque          #+#    #+#             */
/*   Updated: 2021/11/04 00:57:09 by mimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	digit;
	int		pow;

	if (n == INT_MIN)
		ft_putstr_fd("-2147483648", fd);
	else if (n == 0)
		ft_putchar_fd('0', fd);
	else
	{
		pow = 0;
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n *= -1;
		}
		while (n / pow >= 10)
			pow *= 10;
		while (pow)
		{
			digit = n / pow + '0';
			ft_putchar_fd(digit, fd);
			n = n % pow;
			pow /= 10;
		}
	}
}

/* STUPID MF DOESNT LET ME ALOCATE MEMORY TO ONELINE THIS MF REEEE
{
	char	*nbr;

	nbr = ft_itoa(n);
	write(fd, nbr, ft_strlen(nbr));
}*/
