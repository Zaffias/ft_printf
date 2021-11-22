/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpereda- <rpereda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:44:52 by rpereda-          #+#    #+#             */
/*   Updated: 2021/11/22 17:05:37 by rpereda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	pick_flags(const char c, va_list args, ssize_t rd)
{
	if (c == 'c')
		rd = ft_putchar(va_arg(args, char));
	else if (c == 's')
		rd = ft_putstr(va_arg(args, char *), &rd);
	else if (c == 'd' || c == 'i')
		rd = ft_putnbr(va_arg(args, int), &rd);
	else if (c == 'u')
		rd = ft_putnbr_u(va_arg(args, unsigned int), &rd);
	else if (c == 'p')
		rd = ft_putmem(va_arg(args, void *), &rd);
	else if (c == 'x')
		rd = ft_puthex_low(va_arg(args, unsigned int), &rd);
	else if (c == 'X')
		rd = ft_puthex_cap(va_arg(args, unsigned int), &rd);
	else if (c == '%')
		rd = ft_putchar('%');
	else
		return (0);	
	return(rd);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	ssize_t	bytes;
	

	va_start(args, s);
	bytes = 0;
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			bytes += pick_flags(*s, args, bytes);
		}
		else
			bytes += write(1, s, 1);
		s++;
		va_end(args);
	}
	return (bytes);
}

int main()
{
	int i = ft_printf("%X", 85558);
	int j = printf("%X", 85558);
	printf("mia:%d sistema:%d", i , j);
}
