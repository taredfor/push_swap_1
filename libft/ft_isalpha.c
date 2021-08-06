#include "libft.h"

int	ft_isalpha (int ch)
{
	int	hr;

	hr = 1;
	if ((64 < ch && ch < 91) || (96 < ch && ch < 123))
		return (hr);
	return (0);
}
