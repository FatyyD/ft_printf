<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fadiallo <fadiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 18:12:05 by fadiallo          #+#    #+#             */
/*   Updated: 2022/03/14 18:12:34 by fadiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_dec(va_list ap, int *count)
{
	int	n;

	n = va_arg(ap, int);
	ft_putnbr(n, count);
	return (0);
}
=======
#include "printf.h"

int     ft_dec(va_list ap, int *count)
{
    int n;

    n = va_arg(ap, int);
    ft_putnbr(n, count);
    return (0);
}
>>>>>>> 6fdbc08c28e413eaf52e51e4a9076ae43eeca702
