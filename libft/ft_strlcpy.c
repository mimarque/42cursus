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
	size_t	offset;

	offset = 0;
	if (size > 0)
	{
		while (*(source + offset) != '\0')
		{
			if (offset == size)
			{
				offset--;
				break ;
			}
			*(destination + offset) = *(source + offset);
			offset++;
		}
	}
	*(destination + offset) = '\0';
	while (*(source + offset) != '\0')
		offset++;
	return (offset);
}
