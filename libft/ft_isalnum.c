#include "libft.h"

int	ft_isalnum(int c)
{
	int	ch;

	ch = 1;
	if ((47 < c && c < 58) || (64 < c && c < 91) || (96 < c && c < 123))
		return (ch);
	return (0);
}
