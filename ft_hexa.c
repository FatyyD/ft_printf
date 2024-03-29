/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fadiallo <fadiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 18:41:09 by fadiallo          #+#    #+#             */
/*   Updated: 2022/03/20 17:39:11 by fadiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa(va_list ap, const char *format, int *count)
{
	unsigned int	i;

	i = va_arg(ap, unsigned int);
	if (*format == 'x')
		ft_convermin(i, "0123456789abcdef", count);
	if (*format == 'X')
		ft_convermaj(i, "0123456789ABCDEF", count);
	return (0);
}
