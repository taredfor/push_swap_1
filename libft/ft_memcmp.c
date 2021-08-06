#include "libft.h"

int	ft_memcmp(const void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)(dst + i)) != *((unsigned char *)(src + i)))
			return (*(unsigned char *)(dst + i) - *(unsigned char *)(src + i));
		i++;
	}
	return (0);
}
