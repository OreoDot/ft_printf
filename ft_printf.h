/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolaniya <dolaniya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 23:12:31 by dolaniya          #+#    #+#             */
/*   Updated: 2025/12/17 08:38:10 by dolaniya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int ft_printf(const char *format, ...);
int handle_format(char c, va_list ap);

int ft_putchar(char c);
int ft_putstr(const char *str);
int ft_putnbr(int n);
int ft_putunbr(unsigned int n);
int ft_puthex(unsigned int n, char format);
int ft_putpointer(void *ptr);

#endif