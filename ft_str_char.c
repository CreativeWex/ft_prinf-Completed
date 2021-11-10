
#include "ft_printf.h"

int	ft_strlen(const char *s)
{
    int	len;

    len = 0;
    while (*s)
    {
        s++;
        len++;
    }
    return (len);
}

void	ft_putstr(char const *s)
{
	if (!s)
		return ;
	write(1, s, ft_strlen(s));
}

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_c_format(va_list ap, int *count)
{
    char c;
    c = va_arg(ap, int);
    write(1, &c, 1);
    (*count)++;
}

void ft_s_format(va_list ap, int *count)
{
    int len;
    char *s;

    s = va_arg(ap, char *);
    if (s == NULL)
        s = "(null)";
    len = ft_strlen(s);
    write(1, s, len);
    *count += len;
}