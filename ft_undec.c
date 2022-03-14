#include "printf.h"

int     ft_undec(va_list ap, int *count)
{
    unsigned int i;

    i = va_arg(ap , unsigned int);
	ft_putnbr(i, &count);
    return (0);
}