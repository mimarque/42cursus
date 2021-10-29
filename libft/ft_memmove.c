/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimarque <mimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 19:20:57 by mimarque          #+#    #+#             */
/*   Updated: 2021/10/28 19:21:00 by mimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* check if dest adress is left or right of src,
	then either copy from the beguining or the end */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp;
	char	*dst;

	tmp = (char *)src;
	dst = (char *)dest;
	if (tmp < dst)
	{
		while (n--)
			dst[n] = tmp[n];
	}
	else
		ft_memcpy(dst, tmp, n);
	return (dst);
}

/*
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	const char	*lasts;
	char		*lastd;

	d = dest;
	s = src;
	if (d < s)
		while (n-- != 0)
			*d++ = *s++;
	else
	{
		lasts = s + (n - 1);
		lastd = d + (n - 1);
		while (n-- != 0)
			*lastd-- = *lasts--;
	}
	return (dest);
}*/