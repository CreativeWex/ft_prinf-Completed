#include "printf.h"

void	ft_putnbr_fd(int n)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648");
	else if (n < 0)
	{
		ft_putchar_fd('-');
		ft_putnbr_fd(-n);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10);
		ft_putchar_fd(n % 10 + '0');
	}
	else
		ft_putchar_fd(n + '0');
}

int ft_numlen(int num)
{
    int len;

    len = 0;
    if (n == -2147483648)
        return (11);
    else if (num == 0)
        return (1);
    else if (n < 0)
    {
        len++;
        num *= -1;
    }
    while (num > 0)
    {
        n /= 10;
        len++;
    }
    return (len);
}

void ft_int_format(va_list ap, int *count)
{
    int num;

    num = va_arg(ap, int);
    ft_putnbr(num);
    *count += ft_numlen(num);
}
