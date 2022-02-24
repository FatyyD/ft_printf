#include "printf.h"

int ft_conver(unsigned int n, int base, int *count)
{
    static char rep[]= "0123456789ABCDEF";
    int 

    while (n != 0)
    {
        *--str = rep[n % base];
        n /= base;
    }
    return (str);
}