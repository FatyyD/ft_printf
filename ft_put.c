/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
<<<<<<< HEAD
/*   ft_put.c                                           :+:      :+:    :+:   */
=======
/*   ft_printint.c                                      :+:      :+:    :+:   */
>>>>>>> 6fdbc08c28e413eaf52e51e4a9076ae43eeca702
/*                                                    +:+ +:+         +:+     */
/*   By: fadiallo <fadiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:25:59 by fadiallo          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/03/14 18:55:15 by fadiallo         ###   ########.fr       */
=======
/*   Updated: 2022/02/22 21:51:02 by fadiallo         ###   ########.fr       */
>>>>>>> 6fdbc08c28e413eaf52e51e4a9076ae43eeca702
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

<<<<<<< HEAD
void	ft_putchar(char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}

void	ft_putstr(char *s, int *count)
{
	while (*s)
	{
		ft_putchar(*s, count);
		s++;
	}
}

void	ft_putnbr(int i, int *count)
{
	if (i >= 0 && i <= 9)
		ft_putchar(i + '0', count);
	else if (i < 0 && i != -2147483648)
	{
		ft_putchar('-', count);
		ft_putnbr(i * (-1), count);
=======
void    ft_putchar(char c, int *count)
{
    write(1, &c, 1);
    (*count)++;  
}

void    ft_putstr(char *s, int *count)
{
    while(*s)
    {
        ft_putchar(*s, count);
        s++;
    }
}

void    ft_putnbr(int i,int *count)
{

    if ( i >= 0 && i <= 9)
        ft_putchar(i + '0', count);
    
    else if (i < 0 && i != -2147483648)
	{
		ft_putchar('-', count);
		ft_putnbr(i* (-1), count);
>>>>>>> 6fdbc08c28e413eaf52e51e4a9076ae43eeca702
	}
	else
	{
		ft_putnbr(i / 10, count);
		ft_putnbr(i % 10, count);
<<<<<<< HEAD
	}
}
=======

	}
}
>>>>>>> 6fdbc08c28e413eaf52e51e4a9076ae43eeca702
