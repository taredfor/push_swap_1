#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	buffer;

	i = 0;
	j = ft_strlen(dst);
	k = ft_strlen(src);
	if ((dstsize) <= j)
		buffer = k + dstsize;
	else
	{	
		buffer = j + k;
		while (*(src + i) && (dstsize - 1) > j)
		{
			*(dst + j) = *(src + i);
			j++;
			i++;
		}
		*(dst + j) = '\0';
	}
	return (buffer);
}
