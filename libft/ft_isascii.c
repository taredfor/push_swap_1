#include "libft.h"

int	ft_isascii(int c)
{
	int	ch;

	ch = 1;
	if (0 <= c && c < 128 )
		return (ch);
	return (0);
}
