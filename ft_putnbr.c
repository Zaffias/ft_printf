/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpereda- <rpereda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:43:41 by rpereda-          #+#    #+#             */
/*   Updated: 2021/11/23 19:32:54 by rpereda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_putnbr(int n)
{
	if (n == -2147483648)
		return(write(1,"-2147483648",11));
	if (n < 0)
		return(ft_putchar('-') + ft_putnbr(-n));
	else if (n > 9)
		return(ft_putnbr(n / 10) + ft_putnbr(n % 10));
	else
		return(ft_putchar(n % 10 + '0'));
}
