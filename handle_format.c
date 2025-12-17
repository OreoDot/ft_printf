#include "ft_printf.h"

int handle_format(char c, va_list ap)
{
    if (c == 'c')
        return (ft_putchar(va_arg(ap, int)));
    if (c == 's')
        return (ft_putstr(va_arg(ap, char *)));
    if (c == 'd' || c == 'i')
        return (ft_putnbr(va_arg(ap, int)));
    if (c == 'u')
        return (ft_putunbr(va_arg(ap, unsigned int)));
    if (c == 'x' || c == 'X')
        return (ft_puthex(va_arg(ap, unsigned int), c));
    if (c == 'p')
        return (ft_putpointer(va_arg(ap, void *)));
    if (c == '%')
        return (ft_putchar('%'));
    return (0);
}