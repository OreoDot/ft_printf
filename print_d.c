/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolaniya <dolaniya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 20:12:18 by dolaniya          #+#    #+#             */
/*   Updated: 2025/12/02 00:44:23 by dolaniya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_char(char c)
{
	if (write(1, &c, 1) != 1)
		return (0);
	return (1);
}

int	put_str(const char *s)
{
	int len;

	if (!s)
	{
		if (write(1, "(null)", 6) != 6)
			return (0);
		return (6);
	}
	len = 0;
	while (s[len])
		len++;
	if (len > 0)
		write(1, s, len);
	return (len);
}

int	print_int(va_list args)
{
	long	val;
	char	*str;
	int	printed;

	val = (long)va_arg(args, int);
	str = ft_itoa_long(val);
	if (!str)
		return (0);
	printed = put_str(str);
	free(str);
	return (printed);
}
