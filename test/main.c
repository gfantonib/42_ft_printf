#include "inc/ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char	*str = "F. Scott Fitzgerald";
	void	*str_v = "void Scott Fitzgerald";
	int	nbr_p = 2147483647;
	int	nbr_n = -2147483648;

	printf("\n");
	ft_printf("MANDATORY PART(c, s, p, d, i, u, x, X, %%)\n");
	printf("\n");
	ft_printf("---------------------------------------------\n");

	ft_printf("c: %c\n", *str);
	printf("c: %c\n", *str);
	
	printf("\n");

	ft_printf("s: %s\n", str);
	printf("s: %s\n", str);

	printf("\n");

	ft_printf("p: %p\n", str_v);
	printf("p: %p\n", str_v);

	printf("\n");

	ft_printf("d: %d | %d\n", nbr_p, nbr_n);
	printf("d: %d | %d\n", nbr_p, nbr_n);

	printf("\n");

	ft_printf("i: %i | %i\n", nbr_p, nbr_n);
	printf("i: %i | %i\n", nbr_p, nbr_n);

	printf("\n");

	ft_printf("u: %u | %u\n", nbr_p, nbr_n);
	printf("u: %u | %u\n", nbr_p, nbr_n);

	printf("\n");

	ft_printf("x: %x | %x\n", nbr_p, nbr_n);
	printf("x: %x | %x\n", nbr_p, nbr_n);

	printf("\n");

	ft_printf("X: %X | %X\n", nbr_p, nbr_n);
	printf("X: %X | %X\n", nbr_p, nbr_n);

	printf("\n");

	printf("%d\n", ft_printf("%%: %%\n"));
	printf("%d\n", printf("%%: %%\n"));

	printf("\n");
	
	printf("%d\n", printf(0));
	printf("%d\n", ft_printf(0));
	ft_printf("---------------------------------------------\n");
	return (0);
}

