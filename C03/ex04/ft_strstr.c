/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonaco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 02:32:05 by fmonaco           #+#    #+#             */
/*   Updated: 2019/07/10 04:05:22 by fmonaco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		k;
	int		j;

	i = 0;
	k = 0;
	j = 0;
	while (to_find[j] != '\0')
		j++;
	if (j == 0)
		return (str);
	while (str[i] != '\0')
	{
		while (to_find[k] == str[i + k])
		{
			if (k == j - 1)
				return (str + i);
			k++;
		}
		k = 0;
		i++;
	}
	return (0);
}
