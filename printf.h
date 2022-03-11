#ifndef PRINTF_H
#define PRINTF_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void    ft_putchar(char c, int *count);
int ft_printf(const char *format, ...);
void    ft_putstr(char *s, int *count);
void    ft_putnbr(int i,int *count);
void    ft_conver(unsigned long long n, char *base, int *count);
void    ft_convermaj(int n, char *base, int *count);
int ft_strlen(char *str);
void    ft_ptr(unsigned long long n, char *base, int *count);

#endif
