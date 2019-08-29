/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonaco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 23:04:07 by fmonaco           #+#    #+#             */
/*   Updated: 2019/07/11 23:21:46 by fmonaco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_base(char *base)
{
	int		i;

	if (!*base++ || !*base)
		return (0);
	base--;
	while (*base)
	{
		if (*base <= 32 || *base == 43 || *base == 45)
			return (0);
		i = 1;
		while (*(base + i))
		{
			if (*base == *(base + i))
				return (0);
			i++;
		}
		base++;
	}
	return (1);
}

int		change_base(char *str, char *base, int nb)
{
	int	i;
	int	j;

	while (*str)
	{
		i = 0;
		while (*(base + i))
		{
			if (*str == *(base + i))
				break ;
			i++;
		}
		if (!*(base + i))
			return (nb);
		while (*(base + i))
			i++;
		j = 0;
		while (*str != *(base + j))
			j++;
		nb = (nb * i) + j;
		str++;
	}
	return (nb);
}

int		ft_atoi_base(char *str, char *base)
{
	int	nb;
	int neg;

	nb = 0;
	neg = 0;
	if (!check_base(base))
		return (0);
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg++;
		str++;
	}
	nb = change_base(str, base, nb);
	if (neg % 2 != 0)
		nb = -nb;
	return (nb);
}
