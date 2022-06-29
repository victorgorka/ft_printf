/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 20:18:56 by vde-prad          #+#    #+#             */
/*   Updated: 2022/06/29 09:51:05 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

int	ft_printf(char const *str, ...)
{
	va_list	arglst;
	int		i;

	i = -1;
	va_start(arglst, str);
	//recorro string
	while (str[++i])
	{
		//hay conversion?
		if (str[i] == '%')
		{
			//que conversion?
			if (str[++i] == 'x')
				ft_puthex("0123456789abcdef", va_arg(arglst, int));//imprime conversion
		}
		else
			ft_putchar(str[i]);//imprime caracter del string
	}
	va_end(arglst);
	return (1);
}
/*
int	main()
{
	int	n = 42;
	ft_printf("Hola %x", n);
}
*/
/*
va_start(va_list ap, argN)			This enables access to variadic function arguments.
va_arg(va_list ap, type)			This one accesses the next variadic function argument.
va_copy(va_list dest, va_list src)	This makes a copy of the variadic function arguments.
va_end(va_list ap)					This ends the traversal of the variadic function arguments.

*/
