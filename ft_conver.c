/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fadiallo <fadiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 18:06:56 by fadiallo          #+#    #+#             */
/*   Updated: 2022/03/20 17:23:32 by fadiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_convermin(long long int n, char *base, int *count)
{
	if (n < 0)
	{
		ft_putchar('-', count);
		ft_convermin(n * (-1), base, count);
	}
	else if (n >= 16)
	{
		ft_convermin(n / 16, base, count);
		ft_convermin(n % 16, base, count);
	}
	else if (n >= 0 && n <= 9)
	{
		ft_putchar(n + '0', count);
	}
	else
	{
		ft_putchar(n - 10 + 'a', count);
	}
}

void	ft_convermaj(long long n, char *base, int *count)
{
	if (n < 0)
	{
		ft_putchar('-', count);
		ft_convermaj(n * (-1), base, count);
	}
	else if (n >= 16)
	{
		ft_convermaj(n / 16, base, count);
		ft_convermaj(n % 16, base, count);
	}
	else if (n >= 0 && n <= 9)
	{
		ft_putchar(n + '0', count);
	}
	else
	{
		ft_putchar(n - 10 + 'A', count);
	}
}

void	ft_converptr(uintptr_t n, char *base, int *count)
{
	if (n >= 16)
	{
		ft_converptr(n / 16, base, count);
		ft_converptr(n % 16, base, count);
	}
	else if (n >= 0 && n <= 9)
	{
		ft_putchar(n + '0', count);
	}
	else
	{
		ft_putchar(n - 10 + 'a', count);
	}
}
