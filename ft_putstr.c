/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 12:51:17 by vde-prad          #+#    #+#             */
/*   Updated: 2022/07/05 17:10:13 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

unsigned int	ft_putstr(char *s)
{
	if (s == 0)
		write(1, "(null)", 6);
	else
		write(1, s, ft_strlen(s));
	return (ft_strlen(s));
}
