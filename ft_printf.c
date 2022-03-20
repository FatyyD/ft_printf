/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fadiallo <fadiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:31:14 by fadiallo          #+#    #+#             */
/*   Updated: 2022/03/20 17:20:23 by fadiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;
	int		k;

	k = 0;
	count = 0;
	va_start(ap, format);
	while (format[k] != '\0')
	{
		if (format[k] != '%')
			ft_putchar(format[k], &count);
		else if (format[k] == '%')
		{
			k++;
			ft_format(&format[k], &count, ap);
		}
		k++;
	}
	va_end(ap);
	return (count);
}
