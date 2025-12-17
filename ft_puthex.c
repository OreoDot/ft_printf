/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolaniya <dolaniya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 22:17:09 by dolaniya          #+#    #+#             */
/*   Updated: 2025/12/17 08:33:44 by dolaniya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_puthex(unsigned int n, char format)
{
    char *base;
    int   count = 0;

    if (format == 'x')
        base = "0123456789abcdef";
    else
        base = "0123456789ABCDEF";

    if (n >= 16)
        count += ft_puthex(n / 16, format);
    count += ft_putchar(base[n % 16]);
    return (count);
}