
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
void ft_check_format(const char *str, int *count, va_list ap);
int	ft_atoi(const char *str);
char	*ft_itoa(int n);
void	ft_putnbr_fd(int n, int fd);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *s);





#endif