# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otahirov <otahirov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/09 12:37:57 by mcols             #+#    #+#              #
#    Updated: 2018/07/11 14:12:31 by otahirov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BSQ

SOURCES = srcs/display.c srcs/find_square.c srcs/store_file.c srcs/checker.c srcs/main.c
OBJECTS = gorgeous_input

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -O3 $(SOURCES) -o $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all 