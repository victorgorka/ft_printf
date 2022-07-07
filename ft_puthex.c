/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 18:43:03 by vde-prad          #+#    #+#             */
/*   Updated: 2022/07/07 16:50:22 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

unsigned int	ft_puthexpoint(const char *str, unsigned long long n)
{
	unsigned int	len;
	unsigned int	ncpy;

	len = 0;
	ncpy = n;
	if (n < 16)
		ft_putchar(str[n]);
	else
	{	
		ft_puthexpoint(str, n / 16);
		ft_puthexpoint(str, n % 16);
	}
	while (ncpy)
	{
		ncpy /= 16;
		len++;
	}
	return (len);
}

unsigned int	ft_puthex(const char *str, unsigned long long n)
{
	unsigned int	len;
//	unsigned long long	ncpy;

//	ncpy = n;
	len = 0;	
	if (n < 16)
	{
		ft_putchar(str[n]);
		len++;
	}
	else
	{	
		len += ft_puthex(str, n / 16);
		len += ft_puthex(str, n % 16);
	}
	//if (ncpy == 0)
	//	len++;
//	while (ncpy)
//	{
//		ncpy /= 16;
//		len++;
//	}
	return (len);
}
/*
#include <stdio.h>
int main()
{
	unsigned int	len = ft_puthex("0123456789abcdef", 7000);
	printf("\n%d", len);
}
*/
