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

void    ft_convermin(long long n, char *base, int *count);
void    ft_convermaj(long long n, char *base, int *count);
void    ft_ptr(uintptr_t  n, char *base, int *count);
int     ft_dec(va_list ap, int *count);
int     ft_format(const char *format, int *count, va_list ap);
int     ft_char(va_list ap, int *count);
int     ft_str(va_list ap, int *count);
int     ft_undec(va_list ap, int *count);
int    ft_hexa( va_list ap, const char *format, int *count);
void    ft_converptr(unsigned long long n, char *base, int *count);

<<<<<<< HEAD
void    ft_conver(unsigned long long n, char *base, int *count);
void    ft_convermaj(int n, char *base, int *count);
int ft_strlen(char *str);
void    ft_ptr(unsigned long long n, char *base, int *count);
=======
void    ft_conver(int n, char *base, int *count);
void    ft_convermaj(int n, char *base, int *count);
int ft_strlen(char *str);
void    ft_ptr(uintptr_t  n, char *base, int *count);
>>>>>>> 45c2a191785c694f3deab3faa63f80a62101bf9f

>>>>>>> 2a7e5d977d17090f836dc30567523a28c9f021d7
#endif
