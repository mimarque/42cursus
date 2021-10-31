/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimarque <mimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:10:53 by mimarque          #+#    #+#             */
/*   Updated: 2021/10/29 20:28:53 by mimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	if (!*little)
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		if (big[i] == little[0])
		{
			while (little[j] != '\0' && big[i + j] == little[j]
				&& (size_t)(i + j) < len)
				++j;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
