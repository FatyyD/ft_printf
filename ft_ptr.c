#include "printf.h"

<<<<<<< HEAD
void    ft_ptr(unsigned long long n, char *base, int *count)
{
   //unsigned long long tmp;

    //tmp = 4294967295 + n + 1;
    ft_conver(n, base, count);
    
}
   
=======
void    ft_ptr(uintptr_t n, char *base, int *count)
{
    int i;
    char str[100];

    i = 0;
    if (n == 0)
        ft_putchar('0', count);
    while (str[i])
    {
        str[i++] = base [n %16];
        n = n / 16;
    } 
}
>>>>>>> 45c2a191785c694f3deab3faa63f80a62101bf9f
