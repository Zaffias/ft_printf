/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpereda- <rpereda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:36:50 by rpereda-          #+#    #+#             */
/*   Updated: 2021/11/18 15:48:47 by rpereda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_putstr(const char *s)
{
	ssize_t i;
	size_t len;
	
	len = 0;
	while(s[len])
		len++;
	i = 0;
	while (i < len)
	{
		i += ft_putchar(s[i]);
	}
	return (i);
}
