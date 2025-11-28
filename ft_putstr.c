/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft _putstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolaniya <dolaniya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 07:46:18 by dolaniya          #+#    #+#             */
/*   Updated: 2025/11/28 07:46:23 by dolaniya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(const char *str, int *rtn)
{
	size_t	i;
	

	if (!str)
		return (ft_putstr("(null)", rtn));
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i++], rtn);
	}
}