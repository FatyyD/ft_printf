#include "printf.h"

<<<<<<< HEAD
void    ft_convermin(long long  n, char *base, int *count)
=======
<<<<<<< HEAD
void    ft_conver(unsigned long long n, char *base, int *count)
=======
void    ft_conver(int n, char *base, int *count)
>>>>>>> 45c2a191785c694f3deab3faa63f80a62101bf9f
>>>>>>> 2a7e5d977d17090f836dc30567523a28c9f021d7
{
    if (n < 0)
	{
		ft_putchar('-', count);
		ft_conver(n* (-1), base, count);
	}
<<<<<<< HEAD
    else if (n >= 16)
=======
   else if (n >= 16)
>>>>>>> 45c2a191785c694f3deab3faa63f80a62101bf9f
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