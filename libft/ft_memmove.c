/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimarque <mimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 19:20:57 by mimarque          #+#    #+#             */
/*   Updated: 2021/10/31 16:53:44 by mimarque         ###   ########.fr       */
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
	char		*lastd; 
	char		*lastd; 

	d = dest;
	s = src;
	if (d < s)
		while (len--)
			*d++ = *s++;
	else
	{
		char *lasts = s + (len-1);
		char *lastd = d + (len-1);
		while (len--)
			*lastd-- = *lasts--;
	}
	return dest;
}*/