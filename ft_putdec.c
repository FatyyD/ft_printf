/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fadiallo <fadiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:25:59 by fadiallo          #+#    #+#             */
/*   Updated: 2022/02/21 19:17:00 by fadiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void    ft_putdec(int i,int *count)
{
    if ( i >= '0' && i <= '9')
        ft_putchar(nb + '0', &count);
    
    else if (i < 0 && i != -2147483648)
	{
		ft_putchar('-');
		ft_putdec(i* (-1);
	}
	else
	{
		ft_putdec(nb / 10);
		ft_putdec(nb % 10);
	}

}