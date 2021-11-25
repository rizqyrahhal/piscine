# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: RizQy <RizQy@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/08 17:36:43 by RizQy             #+#    #+#              #
#    Updated: 2021/11/12 14:42:24 by rarahhal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	rush-02

all:	$(NAME)

SRCS =	ft_strlen.c \
		rush-02.c \

OBJS =	$(SRCS:.c=.o)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRCS)
	gcc -o $(NAME) $(OBJS)

clean:
	rm -f *.o

fclean:	clean
	rm -f $(NAME)
