#include "printf.h"

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
            ft_check_format(++format, count, ap);
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
