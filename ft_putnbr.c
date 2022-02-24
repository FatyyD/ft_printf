/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fadiallo <fadiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:25:59 by fadiallo          #+#    #+#             */
/*   Updated: 2022/02/22 21:51:02 by fadiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void    ft_putnbr(int i,int *count)
{

    if ( i >= 0 && i <= 9)
        ft_putchar(i + '0', count);
    
    else if (i < 0 && i != -2147483648)
	{
		ft_putchar('-', count);
		ft_putnbr(i* (-1), count);
	}
	else
	{
		ft_putnbr(i / 10, count);
		ft_putnbr(i % 10, count);

	}
}