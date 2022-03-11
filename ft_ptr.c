#include "printf.h"

void    ft_ptr(uintptr_t n, char *base, int *count)
{
    int i;
    char str[100];

    i = 0;
    if (n == 0)
        ft_putchar('0', count);
    while (str[i])
    {
        str[i++] = base [n %16];
        n = n / 16;
    } 
}
