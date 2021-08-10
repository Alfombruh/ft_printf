#include "../srcs/ft_printf.h"

int	ft_putchar_int(char c)
{
	write (1, &c, 1);
	return(1);
}
