/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:39:57 by gfantoni          #+#    #+#             */
/*   Updated: 2023/09/05 13:40:18 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa_u(unsigned long long int n, char frmt)
{
	char			*base;
	int				nbr_len;
	unsigned int	base_len;

	nbr_len = 0;
	if (frmt == 'p')
	{
		write(1, "0x", 2);
		nbr_len += 2;
	}
	if (frmt == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	base_len = ft_strlen(base);
	if (n >= base_len)
	{
		ft_putunbr_base(n / 16, base);
		ft_putunbr_base(n % 16, base);
	}
	else
		write (1, &base[n], 1);
	nbr_len += ft_unbrlen_base(n, base_len);
	return (nbr_len);
}
