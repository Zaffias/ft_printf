/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_cap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpereda- <rpereda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 13:38:24 by rpereda-          #+#    #+#             */
/*   Updated: 2021/11/23 20:18:33 by rpereda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_puthex_cap(unsigned int nbr)
{
	if (nbr >= 16)
		return (ft_puthex_cap(nbr / 16) + ft_putchar(HEX_C[nbr % 16]));
	else
		return (ft_putchar(HEX_C[nbr % 16]));
}
