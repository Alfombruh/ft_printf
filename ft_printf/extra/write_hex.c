#include "../srcs/ft_printf.h"

int write_hex(va_list op)
{
    int i;

    i = ft_putnbr_base_int(va_arg(op, int), "0123456789abcdef");
    return(i);
}