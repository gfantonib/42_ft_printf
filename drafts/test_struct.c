#include "main.h"
	
t_nbr	ft_sub_change(t_nbr nbr)
{
	nbr.c = 4;
	return (nbr);
}

void	ft_change(t_nbr *nbr)
{
	nbr->a = 1;
	nbr->b = 2;
	nbr->c = 3;
	*nbr = ft_sub_change(*nbr);
}

t_nbr	ft_nbr_init(void)
{
	t_nbr	nbr;
	nbr.a = 0;
	nbr.b = 0;
	nbr.c = 0;
	return (nbr);
	
}

int	main(void)
{

	t_nbr	nbr;
	nbr = ft_nbr_init();
	ft_change(&nbr);
	
	printf("a = %d | ", nbr.a);
	printf("%p\n", &nbr.a);
	printf("b = %d | ", nbr.b);
	printf("%p\n", &nbr.b);
	printf("c = %d | ", nbr.c);
	printf("%p\n", &nbr.c);
	printf("%p | ", &nbr);
	printf("%p\n", &nbr.a);
	printf("%ld\n", sizeof(t_nbr));
}
