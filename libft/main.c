/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimarque <mimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:42:47 by mimarque          #+#    #+#             */
/*   Updated: 2021/11/01 21:11:37 by mimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	int	a;
	int	b;
	int	c;

	a = -2000;
	b = -2345;
	c = 12345;
	printf("%d %s", a, ft_itoa(a));
	printf("%d %s", b, ft_itoa(b));
	printf("%d %s", c, ft_itoa(c));
}
