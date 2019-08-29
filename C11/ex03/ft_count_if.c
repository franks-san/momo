/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonaco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 23:40:29 by fmonaco           #+#    #+#             */
/*   Updated: 2019/07/23 19:14:36 by fmonaco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int length, int (*f)(char*))
{
	int		i;
	int		counter;

	i = 0;
	counter = 0;
	while (i < length)
	{
		if (f(tab[i]) == 1)
			counter++;
		i++;
	}
	return (counter);
}
