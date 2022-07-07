/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 20:18:56 by vde-prad          #+#    #+#             */
/*   Updated: 2022/07/07 11:36:23 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static unsigned int	ft_conver(char c, va_list arglst)
{
	unsigned int	len;

	len = 0;
	if (c == 'c')
		len = ft_putchar(va_arg(arglst, int));
	else if (c == '%')
		len = ft_putstr("%");
	else if (c == 's')
		len = ft_putstr(va_arg(arglst, char *));
	else if (c == 'p')
	{
		len = ft_putstr("0x");
		len += ft_puthexpoint("01234567889ABCDEF", va_arg(arglst, long));
	}
	else if (c == 'd' || c == 'i')
		len = ft_putnbr(va_arg(arglst, int));
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
	//char c = 'V';	
	int		len = ft_printf("%%asdasd");
	printf("\n%d", len);
}
*/
/*
va_start(va_list ap, argN)			This enables access to variadic function arguments.
va_arg(va_list ap, type)			This one accesses the next variadic function argument.
va_copy(va_list dest, va_list src)	This makes a copy of the variadic function arguments.
va_end(va_list ap)					This ends the traversal of the variadic function arguments.
*/
