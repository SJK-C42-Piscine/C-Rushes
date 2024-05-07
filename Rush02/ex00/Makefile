# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/24 22:05:15 by dgomez-a          #+#    #+#              #
#    Updated: 2024/03/24 23:18:59 by dgomez-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	= cc
CFLAGS	= -Wall -Wextra -Werror

NAME	= rush-02

SRC	= ${wildcard *.c}
OBJ	= ${SRC:.c=.o}

all:	${NAME}

${NAME}:	${OBJ}
	${CC} ${CFLAGS} -o ${NAME} ${OBJ} -lm

clean:
	rm -f ${OBJ}

fclean:	clean
	rm -f ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
