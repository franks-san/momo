/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonaco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 12:13:55 by fmonaco           #+#    #+#             */
/*   Updated: 2019/07/09 17:09:39 by fmonaco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	dec_to_hex(unsigned char c)
{
	int		x;
	int		z;

	x = c / 16;
	z = c % 16;
	ft_putchar('\\');
	if (x < 10)
		ft_putchar(x + '0');
	else
		ft_putchar('a' + (x % 10));
	if (z < 10)
		ft_putchar(z + '0');
	else
		ft_putchar('a' + (z % 10));
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			dec_to_hex(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}
