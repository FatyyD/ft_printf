#include <stdio.h>
#include "printf.h"

int main()
{
   int i;
    int *pointer = &i;

    printf("mon printf : %d\n", ft_printf("oui %p\n", pointer));
    printf("vrai printf : %d\n", printf("oui %p\n", pointer));
}