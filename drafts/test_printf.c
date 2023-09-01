#include <stdio.h>

int	main(void)
{
	char	*str = "F. Scott Fitzgerald";
	int	nbr_p = 1969;
	int	nbr_n = -1969;

	printf("c flag: %c\n", *str);
	printf("s flag: %s\n", str);
	printf("p flag: %p\n", str);
	printf("d flag_p: %d | d flag_n: %d\n", nbr_p, nbr_n);
	printf("i flag_p: %i | i flag_n: %i\n", nbr_p, nbr_n);
	printf("u flag_p: %u | u flag_n: %u\n", nbr_p, nbr_n);
	printf("x flag_p: %x | x flag_n: %x\n", nbr_p, nbr_n);
	printf("X flag_p: %X | X flag_n: %X\n", nbr_p, nbr_n);
	printf("percentage flag: %%\n");
	return (0);
}
