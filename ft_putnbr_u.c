/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpereda- <rpereda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 12:56:40 by rpereda-          #+#    #+#             */
/*   Updated: 2021/11/23 19:51:11 by rpereda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_putnbr_u(unsigned long n)
{
	if (n > 9)
	{
		return (ft_putnbr_u(n / 10) + ft_putchar(n % 10 + '0'));
	}
	return(ft_putchar(n % 10 + '0'));
}
