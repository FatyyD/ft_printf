/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fadiallo <fadiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 18:49:00 by fadiallo          #+#    #+#             */
/*   Updated: 2022/03/14 19:31:52 by fadiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_ptr(va_list ap, char *format, int *count)
{
	int i;

	i = va_arg(ap, int);
	ft_putstr("Ox", count);
	ft_converptr((unsigned long long)i, "0123456789abcdef", count);
	return (0);
}