#include "libft.h"

/* Find the end of dst and adjust bytes left but don't go past end;
count does not include NUL s*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dst[i] && i < size)
		i++;
	j = -1;
	while (src[++j] && size && i + j < size - 1)
		dst[i + j] = src[j];
	if (j)
		dst[i + j] = 0;
	while (src[j])
		j++;
	return (i + j);
}