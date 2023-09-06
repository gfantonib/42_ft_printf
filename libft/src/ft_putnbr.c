/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:40:29 by gfantoni          #+#    #+#             */
/*   Updated: 2023/09/05 13:40:30 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(long long int n)
{
	const char	*base = "0123456789";
	int			nbr_len;

	nbr_len = 0;
	if (n == -9223372036854775807)
	{
		write(1, "-9223372036854775807", 20);
		return (20);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		nbr_len += ft_putnbr(-n);
	}
	else if (n >= 10)
	{
		ft_putnbr((n / 10));
		ft_putnbr((n % 10));
	}
	else
		write (1, &base[n], 1);
	nbr_len += ft_nbrlen_base(n, ft_strlen(base));
	return (nbr_len);
}
