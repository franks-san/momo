# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmonaco <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/25 03:18:44 by fmonaco           #+#    #+#              #
#    Updated: 2019/07/25 03:35:41 by fmonaco          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = display_file

SRCS = srcs/

FLAG = -Wall -Werror -Wextra

FILE = $(SRCS)display_file.c

OBJ = display_file.o

all: compile

compile:
	gcc ${FLAG} ${FILE} -o ${NAME}

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}

re: fclean all
