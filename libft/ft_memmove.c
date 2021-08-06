#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (src < dest)
	{
		while (len > 0)
		{
			*((char *)(dest + len - 1)) = *((char *)(src + len - 1));
			len--;
		}
	}
	if (src > dest)
	{
		while (i < len)
		{
			*((char *)(dest + i)) = *((char *)(src + i));
			i++;
		}
	}
	return (dest);
}
