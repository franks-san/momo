/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonaco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 22:25:05 by fmonaco           #+#    #+#             */
/*   Updated: 2019/07/16 18:34:07 by fmonaco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*arr;
	int		len;

	i = 0;
	len = max - min;
	if (min >= max)
		return (0);
	arr = (int*)malloc(sizeof(int) * len);
	if (arr == 0)
		return (0);
	while (i < len)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
