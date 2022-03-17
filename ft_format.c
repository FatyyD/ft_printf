#include "ft_printf.h"

int     ft_format(const char *format, int *count, va_list ap)
{
    int i;

    i = 0;
    if (format[i] == 'c')
            ft_char(ap, count);
    if (format[i] == 's')
            ft_str(ap, count);
    if (format[i] == 'd' || format[i] == 'i')
             ft_dec(ap, count);
    if (format[i] == 'u')
            ft_undec(ap, count);         
    if (format[i] == 'x' || format[i] == 'X')
              ft_hexa(ap, format, count);
    if (format[i] == 'p')
              ft_ptr(ap, count);
    if (format[i] == '%')
            ft_putchar('%', count);  
    return (0);                                                   
}
