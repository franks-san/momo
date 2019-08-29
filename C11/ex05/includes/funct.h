/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funct.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonaco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 17:57:26 by fmonaco           #+#    #+#             */
/*   Updated: 2019/07/23 01:31:32 by fmonaco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCT_H
# define FUNCT_H
# include <unistd.h>

typedef struct	s_cal
{
	char	op;
	int		(*f)(int a, int b);
}				t_cal;

void			ft_putchar(char c);
void			ft_putnbr(int nb);
void			ft_putstr(char *str);
int				ft_atoi(char *str);
int				do_add(int a, int b);
int				do_sott(int a, int b);
int				do_div(int a, int b);
int				do_molt(int a, int b);
int				do_mod(int a, int b);

#endif
