/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fadiallo <fadiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:31:14 by fadiallo          #+#    #+#             */
/*   Updated: 2022/02/20 20:03:32 by fadiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_printf(const char *format, ...)
{
		va_list ap;
		unsigned int i;
		int count;
		

		va_start(ap, format);
		count = 0;
		while (*format != '\0')
		{
			if ( *format != '%')
				ft_putchar(*format, &count);
			else if ( *format == 'c')
				i = va_arg(ap, int);
				ft_putchar(c);
			else if (*format == 's')
				i = va_arg(ap, int);
				ft_putstr();
			else if (*format == 'd')
				i = va_arg(ap, int);
				ft_putnbr();	
			else if (*format == 'o')
			i = va_arg(ap , int);
				ft_convert();
			format++;
		}       
		
	//	if (*str == )
		va_end(ap);
		return (count);
}

