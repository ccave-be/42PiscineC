# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    rum.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By:          <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/22 23:47:30 by otahirov          #+#    #+#              #
#    Updated: 2018/06/23 01:59:11 by otahirov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
# First of all make sure that run.sh have execute permission
# Example: ./run.sh filename
echo Initializing compiler! Beware of warnings now!
gcc -Wall -Wextra -Werror -o $1.out $1 main.c
echo Initializing Norminette! Beware of errors now!
norminette -R CheckForbiddenSourceHeader $1
echo Initializing the program with the included main.c! Watch out!
./$1.out
