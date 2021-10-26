#include "libft.h"

void	*memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	i = -1;
	if ((dest != src) && n)
		while (++i < n)
			((unsigned char *)dest)[i] = (unsigned char *)src;
	return (dest);
}
