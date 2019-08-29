# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmonaco <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/22 18:11:31 by fmonaco           #+#    #+#              #
#    Updated: 2019/07/24 16:55:47 by fmonaco          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRC = srcs/main.c srcs/funct.c srcs/operation.c

OBJ = main.o funct.c operation.c

HEADER = includes/

FLAGS = -Wall -Wextra -Werror

all: compile

compile:
	gcc ${FLAGS} -I${HEADER} ${SRC} -o ${NAME}

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}

re: all
