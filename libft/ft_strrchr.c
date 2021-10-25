#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	while (len-- != 0)
		if (s[len] == c)
			return ((char *)(s + i));
	return (NULL);
}
