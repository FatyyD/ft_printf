#include "prinft.h"

void    ft_ptr(int n, char *base )
{
    int i;
    char *str;

    i = 0;
    if (n == 0)
    write(1, '0', 1);
    while (str[i])
    {
        str[i++] = base [n / 16];
        n %= 16;
    }


}