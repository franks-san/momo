/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonaco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 03:35:57 by fmonaco           #+#    #+#             */
/*   Updated: 2019/07/25 11:28:56 by fmonaco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	display(char *filename)
{
	int		file;
	char	lettera;

	file = open(filename, O_RDONLY);
	if (file < 0)
		return ;
	while (read(file, &lettera, 1))
		write(1, &lettera, 1);
	close(file);
}

int		main(int ac, char **av)
{
	if (ac == 1)
		ft_putstr("File name missing.\n");
	if (ac > 2)
		ft_putstr("Too many arguments.\n");
	else
		display(av[1]);
	return (0);
}
