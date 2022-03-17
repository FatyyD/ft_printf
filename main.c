#include <stdio.h>
#include "ft_printf.h"

int main()
{
    int i = 100;
    int *pointer = &i;

    printf("mon printf : %d\n", ft_printf("oui %p\n", -2));
    printf("vrai printf : %d\n", printf("oui %p\n", -2));
}