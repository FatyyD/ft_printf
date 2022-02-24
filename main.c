#include <stdio.h>
#include "printf.h"

int main()
{
    printf("mon printf : %d\n", ft_printf("oui %x\n", 5));
    printf("vrai printf : %d\n", printf("oui %x\n", 5));
}