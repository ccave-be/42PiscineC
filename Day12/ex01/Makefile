# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcols <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/05 10:03:07 by mcols             #+#    #+#              #
#    Updated: 2018/07/05 10:03:09 by mcols            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SOURCES = srcs/ft_checkers.c srcs/ft_errors.c srcs/ft_read.c srcs/main.c
INCLUDES = includes/
OBJECTS = *.o

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) -I$(INCLUDES) $(SOURCES)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
