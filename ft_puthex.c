/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 18:43:03 by vde-prad          #+#    #+#             */
/*   Updated: 2022/07/02 14:11:36 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

unsigned int	ft_puthex(const char *str, int n)
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
