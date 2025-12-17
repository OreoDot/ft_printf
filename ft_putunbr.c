/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignedint.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolaniya <dolaniya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 22:17:41 by dolaniya          #+#    #+#             */
/*   Updated: 2025/12/17 06:22:15 by dolaniya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putunbr(unsigned int n)
{
    int count;

    count = 0;
    if (n >= 10)
        count += ft_putunbr(n / 10);
    count += ft_putchar((n % 10) + '0');
    return (count);
}
