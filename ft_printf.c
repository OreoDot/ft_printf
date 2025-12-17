/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolaniya <dolaniya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 22:16:51 by dolaniya          #+#    #+#             */
/*   Updated: 2025/12/17 08:30:56 by dolaniya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list ap;
    int     count;

    va_start(ap, format);
    count = 0;

    while (*format)
    {
        if (*format == '%' && *(format + 1))
        {
            format++;
            count += handle_format(*format, ap);
        }
        else
            count += ft_putchar(*format);
        format++;
    }
    va_end(ap);
    return (count);
}
