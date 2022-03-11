#include <stdio.h>
#include "printf.h"

int main()
{
    int i = 100;
    int *pointer = &i;

    printf("mon printf : %d\n", ft_printf("oui %%\n"));
    printf("vrai printf : %d\n", printf("oui %%\n"));
}