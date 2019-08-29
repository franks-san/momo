/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonaco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 20:00:21 by fmonaco           #+#    #+#             */
/*   Updated: 2019/07/06 20:37:51 by fmonaco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_arr(int n, int arr[n])
{
	int		i;
	char	c_arr[n];

	i = 0;
	while (i < n)
	{
		c_arr[i] = arr[i] + '0';
		write(1, c_arr + i, 1);
		i++
	}
}

void	ft_gio(int n, int arr[])
{
	int		i;
	int		k;

	i = n - 1;
	while (i >= 0)
	{
		if (arr[i] == 10 - n + i +1)
		{
			arr[i - 1]++;
			k = i;
			while (k < n)
			{
				arr[k] = arr[k - 1] + 1;
				k++;
			}
		}
		i--;
	}
}

void	ft_print_combn(int n)
{
	int		arr[n];
	int		i;

	i = 0;
	while (i < n)
	{
		arr[i] = i;
		i++;
	}
	while (arr[0] != 10 - n && arr[n - 1] != 10)
	{
		ft_print_arr(n, arr);
		arr[n - 1]++;
		ft_gio(n, arr);
		write(1, ", ", 2);
	}
	ft_print_arr(n, arr);
}
