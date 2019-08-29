/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonaco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 02:16:45 by fmonaco           #+#    #+#             */
/*   Updated: 2019/07/21 02:30:32 by fmonaco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		verif_base(char *base)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (base[i])
	{
		c = base[i];
		if (c == '+' || c == '-' || c < 33)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	char	temp;
	int		size;

	i = 0;
	size = ft_strlen(str) - 1;
	while (size > i)
	{
		temp = str[size];
		str[size] = str[i];
		str[i] = temp;
		i++;
		size--;
	}
	return (str);
}

int		ft_abs(int value)
{
	if (value < 0)
		return (-value);
	return (value);
}
