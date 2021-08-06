#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int		i;
	long				temp;
	int					sign;

	i = 0;
	sign = 1;
	temp = 0;
	while ((8 < str[i] && str[i] < 14) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (47 < str[i] && str[i] < 58)
	{
		temp = temp * 10 + str[i] - '0';
		i++;
		if (temp > 2147483647 && sign == 1)
			return (-1);
		if (temp > 2147483648 && sign == -1)
			return (0);
	}
	return ((long)(temp * sign));
}
