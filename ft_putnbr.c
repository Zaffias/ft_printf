/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpereda- <rpereda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:43:41 by rpereda-          #+#    #+#             */
/*   Updated: 2021/11/18 16:31:18 by rpereda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_putnbr(int n)
{
	ssize_t read;
	int res;

	res = n;
	if (n == -2147483648)
	{
		ft_putnbr(n / 10);
		read += write(1, "8", 1);
	}
	else if (n < 0)
	{
		read += ft_putchar('-');
		ft_putnbr(-n);
	}
	else
	{
		if (n > 9)
		{
			ft_putnbr(n / 10);
		}
		read += ft_putchar(n % 10 + '0');
	}
	return (read);
}
