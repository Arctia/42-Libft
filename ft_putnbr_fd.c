
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*str;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	else
	{
		str = ft_itoa(n);
		ft_putstr_fd(str, fd);
	}
}
