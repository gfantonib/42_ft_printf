#include "lib.h"

void	ft_putunbr_base(unsigned long long int n, const char *base)
{
	unsigned long long int	base_len;

	base_len = ft_strlen(base);
	if (n >= base_len)
	{
		ft_putunbr_base(n / base_len, base);
		ft_putunbr_base(n % base_len, base);
	}
	else
		write(1, &base[n], 1);
}

