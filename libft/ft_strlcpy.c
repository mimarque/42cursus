/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimarque <mimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:26:59 by mimarque          #+#    #+#             */
/*   Updated: 2021/10/29 16:56:44 by mimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t	strlcpy(char *destination, const char *source, size_t size)
{
	char *d = destination;
	const char *s = source;
	size_t n = size;
	
	if (n > 0)
		while (--n != 0)
			if ((*d++ = *s++) == '\0')
				break;
	if (n == 0) {
		if (size != 0)
			*d = '\0';
		while (*s++)
			;
	}
	return(s - source - 1);
}*/

size_t	ft_strlcpy(char *destination, const char *source, size_t size)
{
	size_t	i;

	i = 0;
	if (!size)
		return (ft_strlen(source));
	while (source[i] != '\0' && i < size)
	{
		destination[i] = source[i];
		i++;
	}
	if (size < ft_strlen(source))
		destination[size - 1] = '\0';
	else
		destination[i] = '\0';
	return (ft_strlen(source));
}
