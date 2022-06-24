/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 20:18:56 by vde-prad          #+#    #+#             */
/*   Updated: 2022/06/24 16:08:33 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdarg.h>
#include<unistd.h>

void	ft_putchar(const char c)
{
	write(1, &c, 1);
}

int	ft_printf(char const *str, ...)
{
	va_list	arglst;

	va_start(arglst, str);
	
	va_end(arglst);
	return (1);
}

int	main()
{
	char	*str = "a";
	char	c = 'v';
	ft_printf(str, c);
}
/*
va_start(va_list ap, argN)			This enables access to variadic function arguments.
va_arg(va_list ap, type)			This one accesses the next variadic function argument.
va_copy(va_list dest, va_list src)	This makes a copy of the variadic function arguments.
va_end(va_list ap)					This ends the traversal of the variadic function arguments.
*/
