#include <stdio.h>
#include "printf.h"

int main()
{
    printf("mon printf : %d\n", ft_printf("oui %X\n", -6));
    printf("vrai printf : %d\n", printf("oui %X\n", -6));
}