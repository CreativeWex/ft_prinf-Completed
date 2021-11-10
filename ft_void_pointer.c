#include "ft_printf.h"

void	ft_p_format(va_list ap, int *count)
{
    unsigned long long int	pointer;

    pointer = va_arg(ap, unsigned long long int);
    ft_putchar('0');
    ft_putchar('x');
    *count += 2;
    ft_transfer_to_16cc(pointer, count, 'x');
}