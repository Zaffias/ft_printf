/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpereda- <rpereda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:03:41 by rpereda-          #+#    #+#             */
/*   Updated: 2021/11/18 16:30:02 by rpereda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t ft_putmem(void *p)
{
	unsigned long long aux;
	ssize_t 			rd;
	aux = (unsigned long long)p;
	
	if (aux >= 16)
	{
		ft_puthex_low(aux / 16);
		rd += ft_putchar(HEX_L[aux % 16]);
	}
	else
		rd += ft_putchar(HEX_L[aux % 16]);
	return (rd);
}
