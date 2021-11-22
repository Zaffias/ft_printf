/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpereda- <rpereda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:43:41 by rpereda-          #+#    #+#             */
/*   Updated: 2021/11/22 17:06:23 by rpereda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_putnbr(int n, ssize_t *read)
{
	if (n == -2147483648)
	{
		ft_putnbr(n / 10, read);
		*read += ft_putchar('8');
	}
	if (n < 0)
	{
		*read += ft_putchar('-');
		ft_putnbr(-n, *read);
	}
	else if (n > 9)
		{
			ft_putnbr(n / 10, read);
			ft_putnbr(n % 10, read);
		}
	else
		*read += ft_putchar(n % 10 + '0');
	return (*read);
}
