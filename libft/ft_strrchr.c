/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimarque <mimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 19:23:33 by mimarque          #+#    #+#             */
/*   Updated: 2021/10/28 19:23:34 by mimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	size_t	len;

	len = ft_strlen(s);
	i = len - 1;
	if (c == 0)
		return ((char *)(s + len));
	while (i-- >= 0)
		if (s[i] == c)
			return ((char *)(s + i));
	return (NULL);
}
