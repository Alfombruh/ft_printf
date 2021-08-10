#include "../srcs/ft_printf.h"

int write_string(va_list op)
{
    int i;
    
    i = ft_putstr_int(va_arg(op, char *));
    return(i);
}