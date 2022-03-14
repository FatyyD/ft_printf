#include "printf.h"

int     ft_dec(va_list ap, int *count)
{
    int n;

    n = va_arg(ap, int);
    ft_putnbr(n, count);
    return (0);
}