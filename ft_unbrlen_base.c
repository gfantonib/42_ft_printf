/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unbrlen_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:41:31 by gfantoni          #+#    #+#             */
/*   Updated: 2023/09/05 13:41:32 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_unbrlen_base(unsigned long long n, size_t base)
{
	size_t	i;

	i = 1;
	while (n >= (unsigned long long)base)
	{
		n /= base;
		i++;
	}
	return (i);
}
