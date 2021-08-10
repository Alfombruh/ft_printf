#include "../srcs/ft_printf.h"

int write_pointer(va_list op)
{
    int i;

    write(1, "00X", 3);
    i = ft_putnbr_base_int(va_arg(op, int), "0123456789abcdef");
    return(i + 3);
}