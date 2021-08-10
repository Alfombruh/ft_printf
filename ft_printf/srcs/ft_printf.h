#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <limits.h>
#include "../libft/libft.h"

int ft_printf(char *format, ...);
int ft_putchar_int(char c);
int ft_putnbr_int(int n);
int ft_putstr_int(char *string);
int ft_putnbr_base_int(int nbr, char *base);
int write_char(va_list op);
int	write_int(va_list op);
int write_nbr(va_list op);
int write_hex(va_list op);
int write_string(va_list op);
int write_pointer(va_list op);


typedef struct s_data
{
	int tl;
}		t_data;

#endif
