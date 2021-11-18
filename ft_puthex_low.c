/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_low.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpereda- <rpereda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 13:24:23 by rpereda-          #+#    #+#             */
/*   Updated: 2021/11/18 15:49:19 by rpereda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_puthex_low(unsigned int nbr)
{
	unsigned int	res;
	ssize_t 		rd;
	
	res = nbr;
	if (res >= 16)
	{
		ft_puthex_low(res / 16);
		rd += ft_putchar(HEX_L[res % 16]);
	}
	else
		rd += ft_putchar(HEX_L[res % 16]);
	return (rd);
}
