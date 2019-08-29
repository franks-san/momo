/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonaco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 21:02:28 by fmonaco           #+#    #+#             */
/*   Updated: 2019/07/18 02:35:24 by fmonaco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int					ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

char				*ft_strcpy(char *str)
{
	char	*arr;
	int		i;

	i = 0;
	arr = malloc(sizeof(*arr) * (ft_strlen(str) + 1));
	if (arr == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		arr[i] = str[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*arr;

	i = 0;
	if (!(arr = malloc(sizeof(struct s_stock_str) * (ac + 1))))
		return (NULL);
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strcpy(av[i]);
		i++;
	}
	arr[i].str = 0;
	return (arr);
}
