/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_cap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpereda- <rpereda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 13:38:24 by rpereda-          #+#    #+#             */
/*   Updated: 2021/11/18 15:49:02 by rpereda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_puthex_cap(unsigned int nbr)
{
	unsigned int	res;
	ssize_t 		rd;
	
	res = nbr;
	if (res >= 16)
	{
		ft_puthex_cap(res / 16);
		rd += ft_putchar(HEX_C[res % 16]);
	}
	else
		rd += ft_putchar(HEX_C[res % 16]);
	return (rd);
}
