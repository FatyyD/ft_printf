/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_undec.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fadiallo <fadiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 18:59:22 by fadiallo          #+#    #+#             */
/*   Updated: 2022/03/14 19:23:46 by fadiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_undec(va_list ap, int *count)
{
	unsigned int	i;

	i = va_arg(ap, unsigned int);
	ft_putnbr(i, count);
	return (0);
}
