/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolaniya <dolaniya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 23:12:31 by dolaniya          #+#    #+#             */
/*   Updated: 2025/11/25 23:12:33 by dolaniya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FTPRINTF
#define FTPRINTF

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <stdint.h>

void	ft_putchar(char c, int *rtn);
void	ft_putstr(const char *str, int *rtn);
int	ft_printf(const char *format,...);
void	ft_putnumber(int n, int *rtn);
void	ft_putunsignedint(unsigned int n, int *rtn);
void	ft_puthex(int n, int *rtn);
void	ft_puthexl(int n, int *rtn);
void	ft_putpointer(void *ptr, int *rtn);
	
#endif