#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*sf;
	char		*db;
	size_t		i;

	db = dst;
	sf = src;
	i = 0;
	if (db == 0 && sf == 0)
		return (0);
	while (i < n)
	{
		*((unsigned char *)(db + i)) = *((unsigned char *)(sf + i));
		i++;
	}
	return (db);
}
