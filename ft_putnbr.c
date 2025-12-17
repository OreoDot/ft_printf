/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolaniya <dolaniya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 22:17:32 by dolaniya          #+#    #+#             */
/*   Updated: 2025/12/17 08:34:05 by dolaniya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr(int n)
{
    long nb;
    int count;

    nb = n;
    count = 0;
    if (nb < 0)
    {
        count += ft_putchar('-');
        nb = -nb;
    }
    if (nb >= 10)
        count += ft_putnbr(nb / 10);
    count += ft_putchar((nb % 10) + '0');
    return (count);
}