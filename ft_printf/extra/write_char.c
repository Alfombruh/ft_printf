#include "../srcs/ft_printf.h"

int write_char(va_list op)
{
    char c;

    c = (char)va_arg(op, int);
    write(1, &c, 1);
    return(sizeof(char));
}