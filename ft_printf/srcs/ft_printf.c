#include "ft_printf.h"

t_data *ft_initialize(t_data *tab)
{
    tab->tl = 0;
    return (0);
}

int ft_checkargs(char *str, va_list op, t_data struc)
{
	if(*str == 'd' || *str == 'i')
		struc.tl += write_nbr(op);
	else if(*str == 'c')
		struc.tl += write_char(op);
	else if(*str == 's')
		struc.tl += write_string(op);
	else if(*str == 'p')
		struc.tl += write_pointer(op);
	else if(*str == 'u')
		struc.tl += write_nbr(op);
	else if(*str == 'x')
		struc.tl += write_hex(op);
	return(struc.tl);
}

int ft_printf(char *format, ...)
{
	t_data struc;
	va_list op;
	va_start(op, format);

	ft_initialize(&struc);
	while(*format)
	{
		if(*format == '%' && *++format != '%')
			struc.tl += ft_checkargs(format++, op, struc);
		else
			struc.tl += ft_putchar_int(*format++);
	}
	va_end(op);
	return(struc.tl);
}
