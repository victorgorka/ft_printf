/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 20:18:56 by vde-prad          #+#    #+#             */
/*   Updated: 2022/07/07 16:51:37 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <limits.h>

static unsigned int	ft_conver(char c, va_list arglst)
{
	unsigned int	len;

	len = 0;
	if (c == 'c')
		len = ft_putchar(va_arg(arglst, int));
	else if (c == '%')
		len = ft_putchar('%');
	else if (c == 's')
		len = ft_putstr(va_arg(arglst, char *));
	else if (c == 'p')
	{
		len = ft_putstr("0x");
		len += ft_puthex("0123456789abcdef", va_arg(arglst, long));
	}
	else if (c == 'd' || c == 'i')
		len = ft_putnbr(va_arg(arglst, int));
	else if (c == 'u')
		len = ft_putnbru(va_arg(arglst, unsigned int));
	else if (c == 'x')
		len = ft_puthex("0123456789abcdef", va_arg(arglst, long));
	else if (c == 'X')
		len = ft_puthex("0123456789ABCDEF", va_arg(arglst, long));
	return (len);
}

int	ft_printf(char const *str, ...)
{
	va_list			arglst;
	unsigned int	i;
	unsigned int	len;

	len = 0;
	i = -1;
	va_start(arglst, str);
	while (str[++i])
	{
		if (str[i] == '%')
			len += ft_conver(str[++i], arglst);
		else
		{
			ft_putchar(str[i]);
			len++;
		}
	}
	va_end(arglst);
	return (len);
}
/*
#include<stdio.h>
int	main()
{
//	int c = 123123;
//	void *p = &c;
	int		len = ft_printf("%p\n", (void *)LONG_MAX);
	printf("%d\n", len);
	printf("%p\n", (void *)LONG_MAX);
}
*/
