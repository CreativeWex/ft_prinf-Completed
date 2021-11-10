#include "ft_printf.h"

void	ft_display_unsigned(unsigned int n, int *count)
{
    if (n >= 10)
    {
        ft_display_unsigned(n / 10, count);
        n %= 10;
    }
    if (n < 10)
    {
        ft_putchar(n + 48);
        (*count)++;
    }
}

void ft_u_format(va_list ap, int *count)
{
    unsigned int num;

    va_arg(ap, unsigned int);
    ft_display_unsigned(num, count);
}