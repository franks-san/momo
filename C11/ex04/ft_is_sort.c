/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonaco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 01:20:49 by fmonaco           #+#    #+#             */
/*   Updated: 2019/07/24 17:25:10 by fmonaco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_cres(int length, int *tab, int (*f)(int, int))
{
	int		i;

	i = -1;
	while (++i < length - 1)
	{
		if ((*f)(tab[i + 1], tab[i]) < 0)
			return (0);
	}
	return (1);
}

int		ft_decres(int length, int *tab, int (*f)(int, int))
{
	int		i;

	i = -1;
	while (++i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
			return (0);
	}
	return (1);
}

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	return (ft_cres(length, tab, f) || ft_decres(length, tab, f));
}
