/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonaco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 14:21:33 by fmonaco           #+#    #+#             */
/*   Updated: 2019/07/07 22:44:07 by fmonaco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		swap;
	int		t;

	i = 0;
	t = 1;
	while (i < size)
	{
		while (t < size)
		{
			if (tab[i] > tab[t])
			{
				swap = tab[i];
				tab[i] = tab[t];
				tab[t] = swap;
			}
			t++;
		}
		t = ++i + 1;
	}
}
