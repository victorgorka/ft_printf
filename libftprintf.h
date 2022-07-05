/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:56:47 by vde-prad          #+#    #+#             */
/*   Updated: 2022/07/05 16:21:44 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H
//*******************STANDARD LIBRARIES*************************************
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
//************************FUNCTIONS*****************************************
unsigned int	ft_putchar(const char c);
size_t			ft_strlen(const char *s);
unsigned int	ft_putstr(char *s);
unsigned int	ft_putnbr(int n);
unsigned int	ft_puthex(const char *str, unsigned int n);
char			*ft_itoa(int n);
#endif
