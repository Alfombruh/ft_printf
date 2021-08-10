#include "../srcs/ft_printf.h"

int write_nbr(va_list op)
{
    unsigned int i;
    int len;

    i = va_arg(op, unsigned int);
    len = ft_putnbr_int(i);
    return(len);
}