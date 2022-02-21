#include <stdio.h>
#include "printf.h"

int main()
{
    printf("mon printf : %d\n", ft_printf("oui %i\n", '9'));
    printf("vrai printf : %d\n", printf("oui %i\n", '9'));
}