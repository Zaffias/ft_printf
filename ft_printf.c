/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpereda- <rpereda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:44:52 by rpereda-          #+#    #+#             */
/*   Updated: 2021/11/23 20:35:49 by rpereda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	pick_flags(const char c, va_list args)
{
	ssize_t bytes;

	bytes = 0;
	if (c == 'c')
		return(ft_putchar(va_arg(args, int)));
	else if (c == 's')
		return(ft_putstr(va_arg(args, char *),&bytes));
	else if (c == 'd' || c == 'i')
		return(ft_putnbr(va_arg(args, int)));
	else if (c == 'u')
		return(ft_putnbr_u(va_arg(args, unsigned int)));
	else if (c == 'p')
		return (write(1,"0x",2) + ft_putmem(va_arg(args, void*)));
	else if (c == 'x')
		return(ft_puthex_low(va_arg(args, unsigned int)));
	else if (c == 'X')
		return(ft_puthex_cap(va_arg(args, unsigned int)));
	else if (c == '%')
		return(ft_putchar('%'));
	return (0);
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
			bytes += pick_flags(*s, args);
		}
		else
			bytes += write(1, s, 1);
		s++;
	}
	va_end(args);
	return (bytes);
}
// #include <limits.h>
//  int main()
//  {
// 	 int a;
// 	 int j = printf("sys: %p\n",&a);
// 	 int i = ft_printf("mia: %p\n",&a);
// 	 printf("mia:%d sys:%d",i , j);
//  }