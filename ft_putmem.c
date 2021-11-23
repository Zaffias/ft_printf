/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpereda- <rpereda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:03:41 by rpereda-          #+#    #+#             */
/*   Updated: 2021/11/23 20:35:08 by rpereda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static ssize_t	ft_puthex_lo(unsigned long nbr)
{
	if (nbr >= 16)
		return (ft_puthex_lo(nbr / 16) + ft_putchar(HEX_L[nbr % 16]));
	else
		return (ft_putchar(HEX_L[nbr % 16]));
}

ssize_t ft_putmem(void *p)
{
	unsigned long aux;
	
	aux = (unsigned long)p;
	if (aux >= 16)
		return (ft_puthex_lo(aux / 16) + ft_putchar(HEX_L[aux % 16]));
	else
		return (ft_putchar(HEX_L[aux % 16]));
}
