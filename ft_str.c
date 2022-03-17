/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fadiallo <fadiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 18:56:27 by fadiallo          #+#    #+#             */
/*   Updated: 2022/03/14 19:22:10 by fadiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_str(va_list ap, int *count)
{
	char	*st;

	st = va_arg(ap, char *);
	ft_putstr(st, count);
	return (0);
}
