#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *s, ...);
size_t	ft_nbrlen_base(long long int n, size_t base);
int	ft_putchar(const char c);
int	ft_puthexa_u(unsigned long long int n, char fmrt);
int	ft_putnbr(long long int n);
int	ft_putstr(const char *str);
int	ft_putunbr_base(unsigned long long int n, const char *base);
int	ft_strchr(const char *str, const char c);
size_t	ft_strlen(const char *str);
size_t	ft_unbrlen_base(unsigned long long n, size_t base);

#endif
