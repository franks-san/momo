/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonaco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 16:02:16 by fmonaco           #+#    #+#             */
/*   Updated: 2019/07/13 17:23:54 by fmonaco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_find_prime(int nb)
{
	int		i;

	i = 2;
	if (i < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int		i;

	i = 2;
	if (nb < 2)
		return (2);
	while (ft_find_prime(nb) == 0)
		nb++;
	return (nb);
}
