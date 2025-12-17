#include <stdio.h>      // only for comparison prints
#include "ft_printf.h"

int main(void)
{
    int count_ft;
    int count_real;

    char c = 'A';
    char *str = "Hello, 42!";
    int num = -12345;
    int pos = 12345;
    unsigned int u = 4294967295U;  
    int x = 255;
    void *ptr = &num;

    /* -------------------- %c -------------------- */
    ft_printf("=== TEST %%c ===\n");
    count_ft = ft_printf("ft_printf: %c\n", c);
    count_real = printf("real_printf: %c\n", c);
    printf("Count ft_printf: %d | Count real printf: %d\n\n", count_ft, count_real);

    /* -------------------- %s -------------------- */
    ft_printf("=== TEST %%s ===\n");
    count_ft = ft_printf("ft_printf: %s\n", str);
    count_real = printf("real_printf: %s\n", str);
    printf("Count ft_printf: %d | Count real printf: %d\n\n", count_ft, count_real);

    /* -------------------- %p -------------------- */
    ft_printf("=== TEST %%p ===\n");
    count_ft = ft_printf("ft_printf: %p\n", ptr);
    count_real = printf("real_printf: %p\n", ptr);
    printf("Count ft_printf: %d | Count real printf: %d\n\n", count_ft, count_real);

    /* -------------------- %d -------------------- */
    ft_printf("=== TEST %%d ===\n");
    count_ft = ft_printf("ft_printf: %d | %d\n", num, pos);
    count_real = printf("real_printf: %d | %d\n", num, pos);
    printf("Count ft_printf: %d | Count real printf: %d\n\n", count_ft, count_real);

    /* -------------------- %i -------------------- */
    ft_printf("=== TEST %%i ===\n");
    count_ft = ft_printf("ft_printf: %i | %i\n", num, pos);
    count_real = printf("real_printf: %i | %i\n", num, pos);
    printf("Count ft_printf: %d | Count real printf: %d\n\n", count_ft, count_real);

    /* -------------------- %u -------------------- */
    ft_printf("=== TEST %%u ===\n");
    count_ft = ft_printf("ft_printf: %u\n", u);
    count_real = printf("real_printf: %u\n", u);
    printf("Count ft_printf: %d | Count real printf: %d\n\n", count_ft, count_real);

    /* -------------------- %x -------------------- */
    ft_printf("=== TEST %%x ===\n");
    count_ft = ft_printf("ft_printf: %x\n", x);
    count_real = printf("real_printf: %x\n", x);
    printf("Count ft_printf: %d | Count real printf: %d\n\n", count_ft, count_real);

    /* -------------------- %X -------------------- */
    ft_printf("=== TEST %%X ===\n");
    count_ft = ft_printf("ft_printf: %X\n", x);
    count_real = printf("real_printf: %X\n", x);
    printf("Count ft_printf: %d | Count real printf: %d\n\n", count_ft, count_real);

    /* -------------------- %% -------------------- */
    ft_printf("=== TEST %%%% ===\n");
    count_ft = ft_printf("ft_printf: %%\n");
    count_real = printf("real_printf: %%\n");
    printf("Count ft_printf: %d | Count real printf: %d\n\n", count_ft, count_real);

    return (0);
}
