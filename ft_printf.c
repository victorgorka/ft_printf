/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 20:18:56 by vde-prad          #+#    #+#             */
/*   Updated: 2022/07/02 15:21:44 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

static unsigned int	ft_conver(char c, va_list arglst)
{
	unsigned int	len;

	len = 0;
	if (c == 'c')
		len = ft_putchar(va_arg(arglst, int));
	else if (c == 's')
		len = ft_putstr(va_arg(arglst, char *));
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
	//recorro string
	while (str[++i])
	{
		//hay conversion?
		if (str[i] == '%')
			len += ft_conver(str[++i], arglst);
		else
		{
			ft_putchar(str[i]);//imprime caracter del string si no hay conversion
			len++;
		}
	}
	va_end(arglst);
	return (len);
}

int	main()
{
	char	n = 'V';
	ft_printf("Hola %c", n);
}

/*
va_start(va_list ap, argN)			This enables access to variadic function arguments.
va_arg(va_list ap, type)			This one accesses the next variadic function argument.
va_copy(va_list dest, va_list src)	This makes a copy of the variadic function arguments.
va_end(va_list ap)					This ends the traversal of the variadic function arguments.

*/
