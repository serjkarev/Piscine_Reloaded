#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skarev <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/23 18:03:12 by skarev            #+#    #+#              #
#    Updated: 2018/03/23 18:57:49 by skarev           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_display_file
FLAGS = -Wall -Wextra -Werror
all: $(NAME)
$(NAME):
	gcc $(FLAGS) -I header.h -o $(NAME) ./main.c
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: fclean all