/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_low.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpereda- <rpereda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 13:24:23 by rpereda-          #+#    #+#             */
/*   Updated: 2021/11/22 16:57:31 by rpereda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_puthex_low(unsigned int nbr, ssize_t *read)
{
	if (nbr >= 16)
	{
		ft_puthex_low(nbr / 16, read);
		*read += ft_putchar(HEX_L[nbr % 16]);
	}
	else
		*read += ft_putchar(HEX_L[nbr % 16]);
	return (*read);
}
