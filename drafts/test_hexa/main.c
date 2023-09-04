#include "lib.h"
#include "stdio.h"

int	main(void)
{
	char	format = 'x';
	int	n = 1969;
	int	size;

	size = ft_puthexa_u(n, format);
	printf("\n");
	printf("%d\n", size);
	return (0);
}
