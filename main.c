#include "ft_printf.h"

int	main(void)
{
	char	*str = "F. Scott Fitzgerald";
	int	nbr_p = 1969;
	int	nbr_n = -1969;

	ft_printf("------------------------------\n");
	ft_printf("MANDATORY PART(c, s, p, d, i, u, x, X, %%)\n");
	ft_printf("c: %c\n", *str);
	ft_printf("s: %s\n", str);
	ft_printf("p: %p\n", str);
	ft_printf("d(p): %d | d(n): %d\n", nbr_p, nbr_n);
	ft_printf("i(p): %i | i(n): %i\n", nbr_p, nbr_n);
	ft_printf("u(p): %u | u(n): %u\n", nbr_p, nbr_n);
	ft_printf("x(p): %x | x(n): %x\n", nbr_p, nbr_n);
	ft_printf("X(p): %X | X(n): %X\n", nbr_p, nbr_n);
	ft_printf("%%: %%\n");
	ft_printf("------------------------------\n");
	return (0);
}

