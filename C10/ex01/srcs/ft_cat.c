/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonaco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 04:13:14 by fmonaco           #+#    #+#             */
/*   Updated: 2019/07/25 11:18:02 by fmonaco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

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

void	display(int count, char **files)
{
	int		file;
	char	buffer[28676];
	int		i;
	ssize_t bytes;
	char	*filename;

	bytes = 0;
	i = 0;
	while (++i <= count)
	{
		filename = files[i];
		file = open(filename, O_RDWR);
			if (file < 0)
			{
				ft_putstr("cat: ");
				ft_putstr(filename);
				if (errno == 21)
					ft_putstr(": Is a directory\n");
				else
					ft_putstr(": No such file or directory\n");
				continue ;
			}
			while ((bytes = read(file, &buffer, 28676)))
				write(1, &buffer, bytes);
			close(file);
	}
}

void	write_in_term(void)
{
	char	c;

	while (read(STDIN_FILENO, &c, 1) > 0)
		write(1, &c, 1);
}

int		main(int ac, char **av)
{
	if (ac == 1)
		write_in_term();
	else
		display(ac - 1, av);
	return (0);
}
