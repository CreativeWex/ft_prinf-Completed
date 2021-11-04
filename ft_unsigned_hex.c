#include "printf.h"

void	ft_transfer_to_16cc(unsigned long long int n, int *count, char c)
{
    if (n >= 16) //перевод
    {
        ft_transfer_to_16cc(n / 16, count, c);
        n %= 16;
    }
    if (n > 9 && n < 16) //буква
    {
        if (c == 'x')
            ft_putchar_fd((n % 10) + 97);
        else
            ft_putchar_fd((n % 10) + 65);
    }
    else // цифра
        ft_putchar_fd(n + 48);
    (*count)++;
}
void ft_x_format(va_list ap, int *count, char c)
{
    unsigned int num;

    num = va_arg(ap, unsigned int);
    ft_transfer_to_16cc(num, count, c);
}
