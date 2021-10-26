#include "libft.h"

/* check if dest adress is left or right of src,
	then either copy from the beguining or the end */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	char		*lasts;
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
}
