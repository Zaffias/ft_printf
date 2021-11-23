/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpereda- <rpereda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:36:50 by rpereda-          #+#    #+#             */
/*   Updated: 2021/11/23 19:37:45 by rpereda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_putstr(const char *s, ssize_t *read)
{
	if(!s)
		return(write(1, "(null)",6));
	while (*s)
	{
		*read += ft_putchar(*s);
		s++;
	}
	return (*read);
}
