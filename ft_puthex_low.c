/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_low.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpereda- <rpereda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 13:24:23 by rpereda-          #+#    #+#             */
/*   Updated: 2021/11/23 19:48:48 by rpereda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_puthex_low(unsigned int nbr)
{
	if (nbr >= 16)
		return (ft_puthex_low(nbr / 16) + ft_putchar(HEX_L[nbr % 16]));
	else
		return (ft_putchar(HEX_L[nbr % 16]));
}
