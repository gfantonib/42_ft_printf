#include "ft_printf.h"

size_t	ft_nbrlen_base(long long int n, size_t base)
{
	size_t	i;
	while (n >= (long long int)base)
	{
		n /= base;
		i++;
	}
	return (i);
}
