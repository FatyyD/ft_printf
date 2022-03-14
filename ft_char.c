#include "printf.h"

int     ft_char(va_list ap, int *count)
{
    unsigned char c ;

    c = va_arg(ap, int);
    ft_putchar(c, count);
    return (0);
}