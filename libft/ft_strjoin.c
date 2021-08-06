#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*mem;
	size_t	i;
	size_t	j;

	if (!s1)
		return (0);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	mem = malloc(sizeof(char) * (i + j + 1));
	if (!mem)
		return (0);
	i = 0;
	while (*(s1 + i))
	{
		 *(mem + i) = *(s1 + i);
		 i++;
	}
	j = 0;
	while (*(s2 + j))
		*(mem + i++) = *(s2 + j++);
	mem[i] = '\0';
	return (mem);
}
