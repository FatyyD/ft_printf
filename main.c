#include <stdio.h>
#include "printf.h"

int main()
{
    printf("mon printf : %d\n", ft_printf("oui %s\n", "hello"));
    printf("vrai printf : %d\n", printf("oui %s\n", "hello"));
}