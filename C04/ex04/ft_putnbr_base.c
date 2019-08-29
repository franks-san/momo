/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonaco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 21:00:58 by fmonaco           #+#    #+#             */
/*   Updated: 2019/07/12 00:08:11 by fmonaco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int				ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] && base[i] != '+' && base[i] != '-')
	{
		j = i + 1;
		while (base[j] && base[j] != base[i])
		{
			j++;
			if (base[j])
				break ;
		}
		i++;
	}
	if (i > 1 && !base[i])
		return (1);
	else
		return (0);
}

void			ft_putnbr_base(int nbr, char *base)
{
	unsigned int	n;
	unsigned int	lenbase;
	char			c;

	if (ft_check_base(base))
	{
		if (nbr < 0)
		{
			n = -nbr;
			write(1, "-", 1);
		}
		else
			n = nbr;
		lenbase = ft_strlen(base);
		if (n < lenbase)
			c = base[n];
		else
		{
			ft_putnbr_base(n / lenbase, base);
			c = base[n % lenbase];
		}
		write(1, &c, 1);
	}
}
