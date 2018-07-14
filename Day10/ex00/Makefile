# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcols <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/02 11:08:37 by mcols             #+#    #+#              #
#    Updated: 2018/07/02 11:08:39 by mcols            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
			srcs/ft_strlen.c srcs/ft_swap.c

INCLUDES = includes/

OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SOURCES) -I$(INCLUDES)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
