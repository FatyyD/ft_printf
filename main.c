#include <stdio.h>
#include "printf.h"

int main()
{
<<<<<<< HEAD
   int i;
    int *pointer = &i;

    printf("mon printf : %d\n", ft_printf("oui %p\n", pointer));
    printf("vrai printf : %d\n", printf("oui %p\n", pointer));
=======
    int i = 100;
    int *pointer = &i;

    printf("mon printf : %d\n", ft_printf("oui %%\n"));
    printf("vrai printf : %d\n", printf("oui %%\n"));
>>>>>>> 45c2a191785c694f3deab3faa63f80a62101bf9f
}