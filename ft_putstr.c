/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolaniya <dolaniya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 07:46:18 by dolaniya          #+#    #+#             */
/*   Updated: 2025/12/17 04:15:09 by dolaniya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(const char *str)
{
	int	i;

	if (!str)
		return (ft_putstr("(null)"));
	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
	return (i);
}