# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: RizQy <RizQy@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/13 10:50:49 by rarahhal          #+#    #+#              #
#    Updated: 2021/10/14 12:10:35 by rarahhal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCE 	= srcs/
SRCS	= ft_putchar.c \
		  ft_swap.c \
		  ft_putstr.c \
		  ft_strlen.c \
		  ft_strcmp.c 
OBJS 	= ${addprefix ${SOURCE},${SRCS:.c=.o}}
HEADER 	= includes
CC 		= gcc
CFLAGS 	= -Wall -Wextra -Werror
NAME 	= libft.a

.c.o:
			${CC} ${CFLAGS} -I ${HEADER} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
				ar -rc ${NAME} ${OBJS}

all: 		${NAME}

clean:
	rm -f 	${OBJS}

fclean: clean
	rm -f 	${NAME}

re: fclean
	make all
