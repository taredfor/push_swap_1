#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*rez;

	if (!s)
		return (0);
	rez = ft_strdup(s);
	if (!rez)
		return (0);
	i = 0;
	while (*(s + i))
	{
		rez[i] = f(i, s[i]);
		i++;
	}
	return (rez);
}
