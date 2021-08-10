#include "../srcs/ft_printf.h"

int	ft_putstr_int(char *s)
{
	if (!s)
		return (0);
	write (1, s, ft_strlen(s));
	return(ft_strlen(s));
}
