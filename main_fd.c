#include "libft.h"
#include <fcntl.h>

int		main(void)
{
	int		fd;

	fd = open("test.txt", O_RDWR);
	ft_putchar_fd('b', fd);
	ft_putstr_fd("\nhello\n", fd);
	ft_putnbr_fd(42, fd);
	ft_putendl_fd("Hi", fd);
}