/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonaco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 15:27:18 by fmonaco           #+#    #+#             */
/*   Updated: 2019/07/11 11:14:27 by fmonaco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destlen;
	unsigned		i;
	char			*scounter;
	char			*dcounter;

	scounter = src;
	dcounter = dest;
	i = 0;
	while (i++ < size && *dcounter != '\0')
		dcounter++;
	destlen = dcounter - dest;
	if (size - destlen == 0)
		return (destlen + ft_strlen(src));
	i = destlen;
	while (*scounter != '\0')
	{
		if (i++ < size - 1)
		{
			*dcounter = *scounter;
			dcounter++;
		}
		scounter++;
	}
	*dcounter = '\0';
	return (destlen + scounter - src);
}
