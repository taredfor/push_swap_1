#include "libft.h"

int	ft_isprint(int c)
{
	int	ch;

	ch = 1;
	if (32 <= c && c <= 126)
		return (ch);
	return (0);
}
