#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int	count;

	count = ft_printf("Hello %s!\n", "Stranger");
	ft_printf("Char test: %c %c %c\n", 'O', 'K', '!');
	printf("Returned count = %d\n", count);
	return (0);
}
