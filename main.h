#include <stdio.h>

typedef struct s_nbr
{
	int	a;
	int	b;
	int	c;
}		t_nbr;

void	ft_change(t_nbr *nbr);
t_nbr	ft_nbr_init(void);
t_nbr	ft_sub_change(t_nbr nbr);
