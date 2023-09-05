#include "ft_printf.h"

int	ft_putstr(const char *str)
{
	unsigned int	i;

	if (!str)
		return (write(1, "(null)", 6));
	i = 0;
	while (str[i])
		i++;
	return (write (1, str, i));
}
