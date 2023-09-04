/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrudloff <mrudloff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 10:19:29 by mrudloff          #+#    #+#             */
/*   Updated: 2023/01/31 10:19:31 by mrudloff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if ((s[i] >= 'a') && (s[i] <= 'z'))
			s[i] -= 32;
		i++;
	}
	return (s);
}