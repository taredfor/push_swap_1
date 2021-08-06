#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*pb;

	i = 0;
	pb = str;
	while (i < n)
	{
		*(pb + i) = c;
		i++;
	}
	return (pb);
}
