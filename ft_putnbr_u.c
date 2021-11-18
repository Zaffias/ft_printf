/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpereda- <rpereda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 12:56:40 by rpereda-          #+#    #+#             */
/*   Updated: 2021/11/18 15:48:54 by rpereda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_putnbr_u(unsigned int n)
{
	ssize_t	read;

	if (n > 9)
	{
		ft_putnbr_u(n / 10);
	}
	read += ft_putchar(n % 10 + '0');
	return (read);
}
