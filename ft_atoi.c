
#include "libft.h"

int	check_spaces(const char *s)
{
	int	i;

	i = 0;
	while ((s[i] >= 9 && s[i] <= 11) || s[i] == ' ')
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int sign;
	int	res;

	i = check_spaces(str);
	sign = 1;
	res = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-' )
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
