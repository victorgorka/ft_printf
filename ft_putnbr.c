/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 13:16:15 by vde-prad          #+#    #+#             */
/*   Updated: 2022/07/06 16:46:00 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

unsigned int	ft_putnbr(int n)
{
	long			numb;
	unsigned int	len;

	len = 0;
	numb = n;
	if (n < 0)
	{
		ft_putchar('-');
		numb *= -1;
	}
	if (numb <= 9)
		ft_putchar((numb + '0'));
	else
	{
		ft_putnbr(numb / 10);
		ft_putchar((numb % 10) + '0');
	}
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}
/*
int main()
{
	ft_putnbr_fd(-2147483648, 1);
}
*/
