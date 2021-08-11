#include "../srcs/ft_printf.h"

/*int write_pointer(va_list op)
{
    int i;
    char *dir;
    size_t ptr;

    i = 0;
    ptr = va_arg(op, size_t);
    if (!ptr)
       return(write(1, "0x0", 3));
    write(1, "0x", 2);
    dir = ft_pitoa(ptr);
    i = ft_putstr_int(dir);
    free(dir);
    dir = NULL;
    return(i + 2);
}*/


int	write_pointer(va_list op)
{
	char	*b;
	char	*d;
	int		i;
	size_t	tab;

	i = 0;
	tab = va_arg(op, size_t);
	if (!tab)
		return (write (1, "0x0", 3));
	d = ft_pitoa(tab);
	b = ft_strjoin("0x", d);
	while (b[i] != '\0')
		ft_putchar_int(b[i++]);
	free(b);
	free(d);
	b = NULL;
	d = NULL;
	return (i);
}