#include "ft_printf.h"

size_t	ft_unbrlen_base(unsigned long long n, size_t base)
{
	size_t	i;

	i = 1;
	while (n >= (unsigned long long)base)
	{
		n /= base;
		i++;
	}
	return (i);
}
