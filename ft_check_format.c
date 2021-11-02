#include "printf.h"

void ft_check_format(const char *str, int *count, va_list ap)
{
    if (format == 'c')
        ft_c_format(count, ap);
    else if (format == 'd')
        a;
    else if (format == 's')
        ft_s_format(va_list ap, int *count);
    else if (format == 'p')
        a;
    else if (format == 'i')
        a;
    else if (format == 'u')
        a;
    else if (format == 'x')
        a;
    else if (format == 'X')
        a;
    else if (format == '%')
        a;
}

void ft_c_format(va_list ap, int *count)
{
    char c;

    c = va_arg(ap, int);
    write(1, &c, 1);
    (*count++);
}

void ft_s_format(va_list ap, int *count)
{
    int len;
    char *s;

    s = va_arg(ap, char *)
    len = ft_strlen(s);
    write(1, s, len);
    *count += len;
}
