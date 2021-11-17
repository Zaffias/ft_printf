/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpereda- <rpereda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:44:52 by rpereda-          #+#    #+#             */
/*   Updated: 2021/11/17 14:11:31 by rpereda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdargs.h>
	
int ft_printf(const char * s, ...)
{
	va_list args;
	va_start(args,s);
	int bytes;

	bytes = 0;
	while (*s)
	{
		if(*s == '%')
		{
			s++;
			chekar_caracter(s);
			bytes += ft_putnbr(va_arg(args, int));
			 //depende del argumento, esto es en el caso de %d e %i
			 //luego hago el resto XD
			va_end(args);
		}
		else
		{
			//putcharbb
		}
		s++;
	}
	return(bytes);
}
