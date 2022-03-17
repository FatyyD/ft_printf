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

#include "ft_printf.h"

int	ft_ptr(va_list ap, int *count)
{
	void *i;

	i = va_arg(ap, void *);
	ft_putstr("Ox", count);
	ft_converptr((uintptr_t)i, "0123456789abcdef", count);
	return (0);
}
