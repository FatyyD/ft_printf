/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fadiallo <fadiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:31:14 by fadiallo          #+#    #+#             */
/*   Updated: 2022/03/11 23:19:06 by fadiallo         ###   ########.fr       */
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
<<<<<<< HEAD
		void *p;
=======
>>>>>>> 45c2a191785c694f3deab3faa63f80a62101bf9f
		
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
			 	{
					i = va_arg(ap, int);
					ft_putnbr(i, &count);
				}	
				else if (format[k] == 'u')
				{
					i = va_arg(ap , unsigned int);
					ft_putnbr(i, &count);
				}
				else if (format[k] == 'X' || format[k] == 'x')
				{
					i = va_arg(ap, unsigned int);
<<<<<<< HEAD
					ft_conver(i, "0123456789abcdef", &count);
				}
				else if (format[k] == 'p')
				{
					p = va_arg(ap, void *);
					ft_putstr("0x", &count);
					ft_ptr((unsigned long long)p, "0123456789abcdef", &count); 
=======
					if(format[k] == 'x')
						ft_conver(i,"0123456789abcdef", &count);
					if(format[k] == 'X')	
						ft_convermaj(i, "0123456789ABCDEF", &count);
				}
				else if (format[k] == 'p')
				{
					i = va_arg(ap, int);
					ft_putstr("Ox", &count);
					ft_ptr((uintptr_t)i, "0123456789abcdef", &count); 
>>>>>>> 45c2a191785c694f3deab3faa63f80a62101bf9f
				}
				else if (format[k] == '%')
					ft_putchar('%', &count);
			}
			k++;
		}       
		va_end(ap);
		return (count);
}

