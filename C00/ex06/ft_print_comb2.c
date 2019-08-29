/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonaco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 10:32:27 by fmonaco           #+#    #+#             */
/*   Updated: 2019/07/05 16:23:51 by fmonaco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_draw(int a, int b)
{
	char	space;
	char	comma;

	space = 32;
	comma = 44;
	if (a != 98 || b != 99)
	{
		write(1, &comma, 1);
		write(1, &space, 1);
	}
}

void	ft_number(int a, int b)
{
	int		i;
	int		k;
	char	space;

	space = 32;
	if (a != b)
	{
		i = a / 10;
		i += '0';
		write(1, &i, 1);
		k = a % 10;
		k += '0';
		write(1, &k, 1);
		write(1, &space, 1);
		i = b / 10;
		i += '0';
		k = b % 10;
		k += '0';
		write(1, &i, 1);
		write(1, &k, 1);
		ft_draw(a, b);
	}
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (a != b)
			{
				ft_number(a, b);
				b++;
			}
			else
			{
				b++;
			}
		}
		a++;
	}
}
