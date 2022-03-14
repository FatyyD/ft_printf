#include "printf.h"

void    ft_convermin(long long  n, char *base, int *count)
{
    if (n < 0)
	{
		ft_putchar('-', count);
		ft_conver(n* (-1), base, count);
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
    else
    {
        ft_putchar(n - 10 + 'a', count);
    }
}

void    ft_convermaj(long long n, char *base, int *count)
{
    if (n < 0)
	{
		ft_putchar('-', count);
		ft_convermaj(n* (-1), base, count);
	}
   else if (n >= 16)
    {
       ft_convermaj(n / 16, base, count);
       ft_convermaj(n % 16, base, count);
       
    }
    else if (n >= 0 && n <= 9)
    {
        ft_putchar(n + '0', count);
    }
    else
    {
        ft_putchar(n - 10 + 'A', count);
    }
}

void    ft_converptr(unsigned long long n, char *base, int *count)
{
    if (n < 0)
	{
		ft_putchar('-', count);
		ft_conver(n* (-1), base, count);
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
    else
    {
        ft_putchar(n - 10 + 'a', count);
    }
}