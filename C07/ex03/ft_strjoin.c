/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonaco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 23:55:17 by fmonaco           #+#    #+#             */
/*   Updated: 2019/07/21 02:32:08 by fmonaco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_arrei(char *arr, char **strs, char *sep, int size)
{
	int		i;
	int		j;
	int		k;
	int		o;

	i = 0;
	j = 0;
	k = 0;
	o = 0;
	while (i < size)
	{
		while (strs[i][j] != '\0')
			arr[k++] = strs[i][j++];
		while (sep[o] != '\0' && i < size - 1)
		{
			arr[k] = sep[o];
			o++;
			k++;
		}
		i++;
		j = 0;
		o = 0;
	}
	arr[k] = '\0';
	return (arr);
}

int		ft_strlenarr(int size, char **str)
{
	int		len;
	int		i;
	int		j;

	len = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j++] != '\0')
			len++;
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		len;
	int		seplen;

	seplen = 0;
	if (size == 0)
	{
		arr = malloc(1 * sizeof(char));
		arr[0] = '\0';
		return (arr);
	}
	len = ft_strlenarr(size, strs);
	while (sep[seplen] != '\0')
		seplen++;
	arr = (char*)malloc(sizeof(*arr) * (len + seplen * size));
	arr = ft_arrei(arr, strs, sep, size);
	return (arr);
}
