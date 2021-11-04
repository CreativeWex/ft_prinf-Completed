
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

void	ft_putchar_fd(char c);
void	ft_putstr(char const *s);
void    ft_transfer_to_16cc(unsigned long long int n, int *count, char c);
void    ft_c_format(va_list ap, int *count);
void    ft_s_format(va_list ap, int *count);
void    ft_int_format(va_list ap, int *count);
void    ft_x_format(va_list ap, int *count, char c);
void    ft_u_format(va_list ap, int *count);
void	ft_p_format(va_list ap, int *count);

#endif