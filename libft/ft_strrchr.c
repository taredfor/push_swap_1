#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	j;

	i = 0;
	j = -1;
	while (*(str + i))
	{
		if (*(str + i) == (char)c)
			j = i;
		i++;
	}
	if (*(str + i) == (char)c)
		return ((char *)(str + i));
	if (j >= 0)
		return ((char *)(str + j));
	else if (j == -1)
		return (0);
	else
		return ((char *)(str + i));
}
