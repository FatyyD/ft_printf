#include "printf.h"

#include "printf.h"

int    ft_hexa(va_list ap, const char *format, int *count)
{
    unsigned int i;

        i = va_arg(ap, unsigned int);
        if (*format == 'x')
            ft_convermin(i, "0123456789abcdef", count);
        if (*format == 'X')
            ft_convermaj(i, "0123456789ABCDEF", count);
     return (0);
}*/
