/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 12:51:17 by vde-prad          #+#    #+#             */
/*   Updated: 2022/07/05 16:22:08 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

unsigned int	ft_putstr(char *s)
{
	write(1, s, ft_strlen(s));
	return (ft_strlen(s));
}
