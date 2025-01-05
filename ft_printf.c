
#include "ft_printf.h"

int	format(va_list args, char c)
{
	int	var_return;

	var_return = 0;
	if (c == 'c')
		var_return += ft_putchr(va_arg(args, int));
	else if (c == 's')
		var_return += ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		var_return += ft_putstr(va_arg(args, char *));
	else if (c == 'i' || c == 'd')
		var_return += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		var_return += ft_unsigned(va_arg(args, unsigned int));
	else if (c == '%')
		var_return += ft_putchr('%');
	return (var_return);
}

int	ft_printf(const char *str, ...)
{
	va_list args;
	int	var_return;

	va_start(args, str);
	var_return = 0;
	while (*str)
	{
		if (*str == '%')
		{
			var_return += format(args, *++str);
			*str++;
		}
		else
		{	
			var_return += ft_putchr(*str);
			*str++;
		}
	}
	va_end(args);
	return (var_return);
}

int	main(void)
{
	unsigned int a = -100;
	void *p = &a;

	printf("retunr of printf %d", ft_printf("print this string %%\n", a));
	return (0);
}