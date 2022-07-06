/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 18:43:03 by vde-prad          #+#    #+#             */
/*   Updated: 2022/07/06 15:35:12 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

unsigned int	ft_puthexpoint(const char *str, long n)
{
	unsigned int	len;
	int				ncpy;

	len = 0;
	ncpy = n;
	if (n < 16)
	{
		ft_putchar(str[n]);
	}
	else
	{	
		ft_puthex(str, n / 16);
		ft_puthex(str, n % 16);
	}
	while (ncpy)
	{
		ncpy /= 16;
		len++;
	}
	return (len);
}
unsigned int	ft_puthex(const char *str, unsigned int n)
{
	unsigned int	len;
	int				ncpy;

	len = 0;
	ncpy = n;
	if (n < 16)
	{
		ft_putchar(str[n]);
	}
	else
	{	
		ft_puthex(str, n / 16);
		ft_puthex(str, n % 16);
	}
	while (ncpy)
	{
		ncpy /= 16;
		len++;
	}
	return (len);
}
/*
int main()
{
	unsigned int	len = ft_puthex("0123456789abcdef", 'z');
	printf("\n%d", len);
}
*/
