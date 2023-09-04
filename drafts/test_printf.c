#include <stdio.h>

int	main(void)
{
	char	*str = "F. Scott Fitzgerald";
	int	nbr_p = 1969;
	int	nbr_n = -1969;

	printf("------------------------------\n");
	// MANDATORY PART
	printf("MANDATORY PART(c, s, p, d, i, u, x, X, %%)\n");
	printf("c: %c\n", *str);
	printf("s: %s\n", str);
	printf("p: %p\n", str);
	printf("d(p): %d | d(n): %d\n", nbr_p, nbr_n);
	printf("i(p): %i | i(n): %i\n", nbr_p, nbr_n);
	printf("u(p): %u | u(n): %u\n", nbr_p, nbr_n);
	printf("x(p): %x | x(n): %x\n", nbr_p, nbr_n);
	printf("X(p): %X | X(n): %X\n", nbr_p, nbr_n);
	printf("%%: %%\n");
	printf("------------------------------\n");
	printf("BONUS PART ( ,+,#)\n");
	// BONUS PART
	printf("+d(p): %+d | +d(n): %+d\n", nbr_p, nbr_n);
	printf("+i(p): %+i | +i(n): %+i\n", nbr_p, nbr_n);
	printf("#x(p): %#x | #x(n): %#x\n", nbr_p, nbr_n);
	printf("#X(p): %#X | #X(n): %#X\n", nbr_p, nbr_n);
	printf(" d(p): % d\n", nbr_p);
	printf(" d(n): % d\n", nbr_n);
	printf(" i(p): % i\n", nbr_p);
	printf(" i(p): % i\n", nbr_n);
	printf("------------------------------\n");
	printf("BONUS PART (-,.,0)\n");
	printf("10d: %10d|%d\n", nbr_p, nbr_p);
	printf("-10d: %-10d|%d\n", nbr_p, nbr_p);
	printf(".12s: %.12s\n", str);
	printf("08d: %08d\n", nbr_p);
	printf("------------------------------\n");
	printf("-*d: %-*d|%d\n", 10, nbr_p, nbr_p);
	printf(".*s: %.*s\n", 12, str);
	printf("0*d: %0*d\n", 8, nbr_p);
	printf("------------------------------\n");
	printf("*d: %*d\n", 5, nbr_p);
	printf("%ld\n", sizeof(unsigned long int));

	return (0);
}
