# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcols <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/02 18:29:53 by mcols             #+#    #+#              #
#    Updated: 2018/07/02 18:29:55 by mcols            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

INCLUDES = includes/

SOURCES = srcs/checkers.c srcs/main.c srcs/operators.c srcs/transforms.c

OBJECTS =

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -o $(NAME) $(SOURCES) -I$(INCLUDES)

clean:
	rm -f $(OBJECTS)

fclean:
	rm -f $(NAME)

re: fclean all
