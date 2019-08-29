# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmonaco <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/18 23:31:17 by fmonaco           #+#    #+#              #
#    Updated: 2019/07/21 00:09:51 by fmonaco          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror -Iincludes

SRCS = ./srcs/

FT = ${SRCS}ft_putchar.c ${SRCS}ft_swap.c ${SRCS}ft_putstr.c ${SRCS}ft_strlen.c ${SRCS}ft_strcmp.c

FO = ${FT:.c=.o}

NAME = libft.a

RM = rm -rf

${NAME}: ${FO}
	ar rc ${NAME} ${FO}

all: ${NAME}

clean:
	${RM} ${FO}

fclean: clean
	${RM} ${NAME}

re: fclean ${NAME}
