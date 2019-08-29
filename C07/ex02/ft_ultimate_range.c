/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonaco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 12:39:49 by fmonaco           #+#    #+#             */
/*   Updated: 2019/07/16 18:40:36 by fmonaco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*arr;
	int		resmin;

	i = 0;
	resmin = min;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	arr = malloc(sizeof(*arr) * (max - min));
	if (arr == 0)
		return (-1);
	while (i < max - resmin)
	{
		arr[i] = min;
		i++;
		min++;
	}
	*range = arr;
	return (i);
}
