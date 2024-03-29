/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fadiallo <fadiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:25:59 by fadiallo          #+#    #+#             */
/*   Updated: 2022/03/20 17:42:06 by fadiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}

void	ft_putstr(char *s, int *count)
{
	if (s == NULL)
		return (ft_putstr("(null)", count));
	while (*s)
	{
		ft_putchar(*s, count);
		s++;
	}
}

void	ft_putnbr( long long i, int *count)
{
	if (i >= 0 && i <= 9)
		ft_putchar(i + '0', count);
	else if (i < 0)
	{
		ft_putchar('-', count);
		ft_putnbr(i * (-1), count);
	}
	else
	{
		ft_putnbr(i / 10, count);
		ft_putnbr(i % 10, count);
	}
}
