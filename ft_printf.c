#include "ft_printf.h"

void ft_check_format(const char *format, int *count, va_list ap)
{
    if (*format == 'c')
        ft_c_format(ap, count);
    else if (*format == 'd' || *format == 'i')
        ft_int_format(ap, count);
    else if (*format == 's')
        ft_s_format(ap, count);
    else if (*format == 'p')
        ft_p_format(ap, count);
    else if (*format == 'u')
        ft_u_format(ap, count);
    else if (*format == 'x' || *format == 'X')
        ft_x_format(ap, count, *format);
    else if (*format == '%')
    {
        write(1, "%", 1);
        (*count)++;
    }
    else
    {
        write(1, format, 1);
        (*count)++;
    }
}

int		ft_printf(const char *format, ...)
{
    va_list ap;
    int count;

    count = 0;
    va_start(ap, format); // указатель на стек аргументов
    while (*format)
    {
        if (*format == '%')
        {
            ft_check_format(++format, &count, ap);
            format++;
        }
        else
        {
            write(1, format++, 1);
            count++;
        }
    }
    va_end(ap);
    return (count);
}
