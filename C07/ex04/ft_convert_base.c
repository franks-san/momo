/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonaco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 00:54:11 by fmonaco           #+#    #+#             */
/*   Updated: 2019/07/21 15:40:44 by fmonaco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		verif_base(char *base);
int		ft_strlen(char *str);
char	*ft_strrev(char *str);
int		ft_abs(int value);

char	*to_base(int value, char *res, char *base_to)
{
	int		i;
	int		base;
	int		neg;

	neg = (value < 0) ? 1 : 0;
	base = 0;
	while (base_to[base])
		base++;
	i = 0;
	if (value == 0)
		res[i++] = base_to[0];
	while (value != 0)
	{
		res[i] = base_to[ft_abs(value % base)];
		value /= base;
		i++;
	}
	if (neg)
		res[i++] = '-';
	res[i] = '\0';
	return (ft_strrev(res));
}

int		char_val(char c, char *base)
{
	int		i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

long	ft_atoi_base(char *str, char *base)
{
	long	res;
	int		i;
	int		sign;
	int		bas;

	sign = 1;
	res = 0;
	i = 0;
	bas = verif_base(base);
	while (str[i] < 33)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		sign *= ((str[i] == '-') ? -1 : 1);
		i++;
	}
	while (str[i] && (32 < str[i] && str[i] < 127))
	{
		if (char_val(str[i], base) == -1)
			return (res * sign);
		res = res * bas + char_val(str[i], base);
		i++;
	}
	return (res * sign);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char *res;

	if (!nbr || !base_from || !base_to ||
			(verif_base(base_from) < 2) || (verif_base(base_to) < 2))
		return (NULL);
	if (!(res = (char*)malloc(sizeof(char) * 1000)))
		return (NULL);
	return (to_base(ft_atoi_base(nbr, base_from), res, base_to));
}
