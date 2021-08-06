#include "libft.h"

int	ft_isdigit(int c)
{
	int	ch;

	ch = 1;
	if (47 < c && c < 58)
		return (ch);
	return (0);
}
