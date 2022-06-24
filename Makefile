# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/15 17:40:54 by vde-prad          #+#    #+#              #
#    Updated: 2022/06/17 13:04:12 by vde-prad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= 
OBJS		= ${SRCS:.c=.o}
NAME		= libftprintf.a
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f

all: ${NAME}

%.o:.c

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

clean:
	${RM} ${OBJS} ${OBJS_BONUS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re 
