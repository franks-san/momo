/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonaco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 18:54:52 by fmonaco           #+#    #+#             */
/*   Updated: 2019/07/18 19:14:58 by fmonaco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long long	clone;

	clone = nb;
	if (clone < 0)
	{
		ft_putchar('-');
		clone = -clone;
	}
	if (clone > 9)
	{
		ft_putnbr(clone / 10);
		ft_putnbr(clone % 10);
	}
	else
	{
		ft_putchar(clone + '0');
	}
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int		i;

	i = 0;
	while (par[i].str != '\0')
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
