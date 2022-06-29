/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:56:47 by vde-prad          #+#    #+#             */
/*   Updated: 2022/06/29 10:02:17 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H
//*******************STANDARD LIBRARIES*************************************
#include <unistd.h>
#include <stdarg.h>
//************************FUNCTIONS******************************************
void			ft_putchar(const char c);
size_t			ft_strlen(const char *s);
void			ft_putstr(char *s);
unsigned int	ft_putnbr(int n);
int				ft_puthex(const char *str, int n);
#endif
