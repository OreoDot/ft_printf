/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolaniya <dolaniya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 22:16:51 by dolaniya          #+#    #+#             */
/*   Updated: 2025/12/17 05:00:03 by dolaniya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int handle_format(char c, va_list ap)
{
	if (c == 's')
		return (ft_putstr(va_arg(ap, char *)));
	if (c == 'c')
		return (ft_putchar(va_arg(ap, int)));
	return (0);
}

int ft_printf(const char *format, ...)
{
	va_list ap;
	int count;
	
	count = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			count = count + handle_format(*format, ap);
		}
		else
			count = count + ft_putchar(*format);
		format++;
	}
	va_end(ap);
	return (count);
}
