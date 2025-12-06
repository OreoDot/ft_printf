/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolaniya <dolaniya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 22:16:51 by dolaniya          #+#    #+#             */
/*   Updated: 2025/12/06 22:16:54 by dolaniya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_int(va_list args);

int ft_printf(const char *format, ...)
{
	va_list args;
	int count;
	int i;

	if (!format)
		return (-1);
	va_start(args, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'd' || format[i] == 'i')
				count += print_int(args);
			else if (format[i] == '%')
				count += put_char('%');
			else if (format[i] != '\0')
			{
				/* unsupported specifier: print it literally (simple behavior) */
				count += put_char('%');
				count += put_char(format[i]);
			}
			if (format[i] == '\0')
				break;
		}
		else
			count += put_char(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}