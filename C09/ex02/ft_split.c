/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonaco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 22:47:46 by fmonaco           #+#    #+#             */
/*   Updated: 2019/07/20 23:13:32 by fmonaco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		check_sep(char c, char *charset)
{
	int	j;

	j = 0;
	while (charset[j])
	{
		if (c == charset[j])
			return (1);
		++j;
	}
	return (0);
}

int		check_word(char c, char cbefore, char *charset)
{
	return (!check_sep(c, charset) && check_sep(cbefore, charset));
}

int		get_words_count(char *str, char *charset)
{
	int	nb_words;
	int	i;

	i = 0;
	nb_words = 0;
	while (str[i] != '\0')
	{
		if (check_word(str[i], str[i - 1], charset) ||
				(!check_sep(str[i], charset) && i == 0))
			nb_words++;
		i++;
	}
	return (nb_words);
}

int		*words_len(char *str, char *charset)
{
	int	count;
	int	i;
	int	nb_words;
	int	*words_size;

	i = 0;
	nb_words = get_words_count(str, charset);
	words_size = malloc(nb_words * sizeof(int));
	while (i <= nb_words)
	{
		words_size[i] = 0;
		i++;
	}
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (!check_sep(str[i], charset))
			words_size[count]++;
		else if (i > 0 && !check_sep(str[i - 1], charset))
			count++;
		i++;
	}
	return (words_size);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		k;
	int		j;
	int		count;
	int		*words_size;

	arr = malloc((get_words_count(str, charset) + 1) * sizeof(char*));
	words_size = words_len(str, charset);
	count = 0;
	j = 0;
	k = -1;
	while (str[++k] != '\0')
	{
		if (!check_sep(str[k], charset))
		{
			if (k == 0 || check_word(str[k], str[k - 1], charset))
				arr[count] = malloc(words_size[count] * sizeof(char));
			arr[count][j] = str[k];
			arr[count][++j] = '\0';
		}
		else if (k > 0 && !check_sep(str[k - 1], charset) && ++count)
			j = 0;
	}
	arr[get_words_count(str, charset)] = 0;
	return (arr);
}
