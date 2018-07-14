# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcols <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/07 17:27:58 by mcols             #+#    #+#              #
#    Updated: 2018/07/07 17:27:59 by mcols            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SOURCES = srcs/*.c
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
