# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmonaco <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/25 04:09:42 by fmonaco           #+#    #+#              #
#    Updated: 2019/07/25 10:26:04 by fmonaco          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SRCS = srcs/

FILE = ${SRCS}ft_cat.c

OBJ = ft_cat.o

FLAG = -Wall -Werror -Wextra

all: compile

compile:
	gcc ${FLAG} ${FILE} -o ${NAME}

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}

re : fclean all
