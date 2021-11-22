/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_cap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpereda- <rpereda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 13:38:24 by rpereda-          #+#    #+#             */
/*   Updated: 2021/11/22 17:04:53 by rpereda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_puthex_cap(unsigned int nbr, ssize_t *read)
{
	if (nbr >= 16)
	{
		ft_puthex_cap(nbr / 16, read);
		*read += ft_putchar(HEX_C[nbr % 16]);
	}
	else
		*read += ft_putchar(HEX_C[nbr % 16]);
	return (*read);
}
