#include "../srcs/ft_printf.h"

/*int write_int(va_list op)
{
    int i;
    char *str;

    i = va_arg(op, int);
    str = ft_itoa(i);
    write(1, &str, ft_strlen(str));
    i = ft_strlen(str);
    free(str);
    return(i);
}*/

int write_int(va_list op)
{
    int i;
    int len;

    i = va_arg(op, int);
    len = ft_putnbr_int(i);
    return(len);
}