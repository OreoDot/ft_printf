#include "ft_printf.h"

static int ft_puthex_ptr(unsigned long long n)
{
    char *digits;
    int count;

    digits = "0123456789abcdef";
    count = 0;

    if (n >= 16)
        count += ft_puthex_ptr(n / 16);
    count += ft_putchar(digits[n % 16]);

    return (count);
}

int ft_putpointer(void *ptr)
{
    unsigned long long addr;
    int count;

    count = 0;

    if (ptr == NULL)
        return ft_putstr("0x0");

    addr = (unsigned long long)ptr;

    count += ft_putstr("0x");
    count += ft_puthex_ptr(addr);

    return (count);
}