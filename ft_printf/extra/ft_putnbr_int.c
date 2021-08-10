#include "../srcs/ft_printf.h"

int	ft_putnbr_int(int n)
{
	int i;

	i = 1;
	if (n == -2147483648)
		ft_putstr_int("-2147483648");
	else
	{
		if (n < 0)
		{
			n *= -1;
			i += ft_putchar_int('-');
		}
		if (n > 9)
			i += ft_putnbr_int((n / 10));
		i += ft_putchar_int((n % 10) + '0');
	}
	return(i - 1);
}
