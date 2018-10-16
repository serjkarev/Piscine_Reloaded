#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skarev <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/23 13:58:05 by skarev            #+#    #+#              #
#    Updated: 2018/03/23 15:09:01 by skarev           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a
SRCS = ./srcs/ft_putchar.c \
./srcs/ft_putstr.c \
./srcs/ft_strcmp.c \
./srcs/ft_strlen.c \
./srcs/ft_swap.c
HEADERS = ./includes/
FLAGS = -Wall -Wextra -Werror
OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all:
		gcc -c $(FLAGS) $(SRCS) -I $(HEADERS)
		ar rc $(NAME) $(OBJECTS)

clean:
		rm -f $(OBJECTS)

fclean: clean
		rm -f $(NAME)

re: fclean all