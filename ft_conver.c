#include "printf.h"

<<<<<<< HEAD
void    ft_conver(unsigned long long n, char *base, int *count)
=======
void    ft_conver(int n, char *base, int *count)
>>>>>>> 45c2a191785c694f3deab3faa63f80a62101bf9f
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

void    ft_convermaj(int n, char *base, int *count)
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
/*int    ft_hexa( const char *format, int *count)
{
    unsigned int i;

        if (*format == 'x')
            ft_conver(i, "0123456789abcdef", count);
        if (*format == 'X')
            ft_conver(i, "0123456789ABCDEF", count);
     return (0);
}*/