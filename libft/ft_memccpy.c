#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;
	size_t				i;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	while (i < n)
	{
		*(d + i) = *(s + i);
		if (*(s + i) == (unsigned char)c)
			return ((d + i + 1));
		i++;
	}
	return (0);
}
