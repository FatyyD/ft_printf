/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fadiallo <fadiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:31:14 by fadiallo          #+#    #+#             */
/*   Updated: 2022/02/21 21:00:22 by fadiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_printf(const char *format, ...)
{
		va_list ap;
		int i;
		int count;
		int k;
		char *st;
		
		k = 0;
		va_start(ap, format);
		count = 0;
		while (format[k] != '\0')
		{
			if ( format[k] != '%')
				ft_putchar(format[k], &count);
			else if (format[k] == '%')
			{
				k++;
				if (format[k] == 'c')
				{
					i = va_arg(ap, int);
					ft_putchar(i, &count);
				}
			    else if (format[k] == 's')
				{
					st = va_arg(ap, char *);
					ft_putstr(st, &count);
				}
				else if (format[k] == 'd' || format[k] == 'i')
				i = va_arg(ap, int);
				ft_putdec(i, &count);	
			}
			/*else if (*format == 'u')
			i = va_arg(ap , unsigned int);
				ft_();
			else if (*format == 'p')
			i = va_arg(ap, int);
			else if (*format == 'x' || *format ==  'X')
			i = va_arg(ap, int); */
			k++;
		}       
		va_end(ap);
		return (count);
}

