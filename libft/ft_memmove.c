/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimarque <mimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 19:20:57 by mimarque          #+#    #+#             */
/*   Updated: 2021/11/08 13:26:21 by mimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* check if dest adress is left or right of src,
	then either copy from the beguining or the end */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*cs1;
	const unsigned char	*cs2;

	if (dest < src)
		return (ft_memcpy(dest, src, n));
	if (!n || (dest == src))
		return (dest);
	cs1 = (unsigned char *)dest;
	cs2 = (const unsigned char *)src;
	while (n--)
		cs1[n] = cs2[n];
	return (dest);
}

/*void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	const char	*lasts;
	char		*lastd;

	d = dest;
	s = src;
	if (d < s)
		while (n--)
			*d++ = *s++;
	else
	{
		lasts = s + (n - 1);
		lastd = d + (n - 1);
		while (n--)
			*lastd-- = *lasts--;
	}
	return (dest);
}*/