<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fadiallo <fadiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 18:05:40 by fadiallo          #+#    #+#             */
/*   Updated: 2022/03/14 18:06:48 by fadiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_char(va_list ap, int *count)
{
	unsigned char	c;

	c = va_arg(ap, int);
	ft_putchar(c, count);
	return (0);
}
=======
#include "printf.h"

int     ft_char(va_list ap, int *count)
{
    unsigned char c ;

    c = va_arg(ap, int);
    ft_putchar(c, count);
    return (0);
}
>>>>>>> 6fdbc08c28e413eaf52e51e4a9076ae43eeca702
