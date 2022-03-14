/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fadiallo <fadiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 19:02:08 by fadiallo          #+#    #+#             */
/*   Updated: 2022/03/14 19:25:50 by fadiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

void	ft_putchar(char c, int *count);
int		ft_printf(const char *format, ...);
void	ft_putstr(char *s, int *count);
void	ft_putnbr(int i, int *count);
void	ft_convermin(long long n, char *base, int *count);
void	ft_convermaj(long long n, char *base, int *count);
void	ft_ptr(va_list ap, char *format, int *count);
int		ft_dec(va_list ap, int *count);
int		ft_format(const char *format, int *count, va_list ap);
int		ft_char(va_list ap, int *count);
int		ft_str(va_list ap, int *count);
int		ft_undec(va_list ap, int *count);
int		ft_hexa( va_list ap, const char *format, int *count);
void	ft_converptr(unsigned long long n, char *base, int *count);

#endif