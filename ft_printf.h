/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpereda- <rpereda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 12:08:26 by rpereda-          #+#    #+#             */
/*   Updated: 2021/11/23 20:19:13 by rpereda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
 #define PRINTF_H 

#include <unistd.h>
#include <stdarg.h>

#define HEX_L "0123456789abcdef"
#define HEX_C "0123456789ABCDEF"

int		ft_printf(const char *s, ...);
ssize_t	ft_putchar(const char c);
ssize_t	ft_putstr(const char *s, ssize_t *read);
ssize_t	ft_putnbr(int n);
ssize_t	ft_putnbr_u(unsigned long);
ssize_t	ft_puthex_cap(unsigned int);
ssize_t	ft_puthex_low(unsigned int);
ssize_t	ft_putmem(void *p);
#endif
