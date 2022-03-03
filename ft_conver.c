#include "printf.h"

void    ft_conver(unsigned int n, char *base, int *count)
{
 
    if (n == '-')
    {
        ft_putchar('-', count);
    }
    else if (n >= 16)
    {
       ft_conver(n / 16, base, count);
       ft_conver(n % 16, base, count);
       
    }
    else if (n >= 0 && n <= 9)
    {
        ft_putchar(n + '0', count);
    }
    else if ()
    {
        ft_putchar(n - 10 + 'a', count);
    }
}
void    ft_hexa(const char *format)
{
    int i;
    
    if (n == '-')
    {
        ft_putchar('-', count);
    }
    ft_conver(i, )

}