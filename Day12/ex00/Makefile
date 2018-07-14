# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcols <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/04 19:40:32 by mcols             #+#    #+#              #
#    Updated: 2018/07/04 19:40:34 by mcols            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SOURCES = srcs/main.c
INCLUDES = includes/
OBJECTS = 

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -o $(NAME) -I$(INCLUDES) $(SOURCES)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
