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

<<<<<<< HEAD
    printf("mon printf : %d\n", ft_printf("oui %x\n", -11548));
    printf("vrai printf : %d\n", printf("oui %x\n", -11548));
=======
    printf("mon printf : %d\n", ft_printf("oui %%\n"));
    printf("vrai printf : %d\n", printf("oui %%\n"));
>>>>>>> 45c2a191785c694f3deab3faa63f80a62101bf9f
>>>>>>> 2a7e5d977d17090f836dc30567523a28c9f021d7
}