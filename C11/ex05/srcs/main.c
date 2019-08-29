/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonaco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 20:00:56 by fmonaco           #+#    #+#             */
/*   Updated: 2019/07/23 01:29:43 by fmonaco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funct.h"

int		ft_do_op(int a, char op, int b)
{
	int		i;
	t_cal	cal[5];

	cal[0].op = '+';
	cal[0].f = do_add;
	cal[1].op = '-';
	cal[1].f = do_sott;
	cal[2].op = '/';
	cal[2].f = do_div;
	cal[3].op = '*';
	cal[3].f = do_molt;
	cal[4].op = '%';
	cal[4].f = do_mod;
	i = 0;
	while (i < 5)
	{
		if (op == cal[i].op)
			return (cal[i].f(a, b));
		i++;
	}
	return (0);
}

int		ft_check(char op, int b)
{
	if (op == '/' && b == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	if (op == '%' && b == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	return (1);
}

int		main(int ac, char **av)
{
	if (ac == 4)
	{
		if (ft_check(av[2][0], ft_atoi(av[3])))
		{
			ft_putnbr(ft_do_op(ft_atoi(av[1]), av[2][0], ft_atoi(av[3])));
			ft_putchar('\n');
		}
	}
	return (0);
}
