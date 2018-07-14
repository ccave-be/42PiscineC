# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    rum.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By:          <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/22 23:47:30 by otahirov          #+#    #+#              #
#    Updated: 2018/07/01 18:33:44 by mcols            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
# First of all make sure that run.sh have execute permission
# Example: ./run.sh filename
echo Initializing compiler! Beware of warnings now!
gcc -Wall -Wextra -Werror sudoku_grid.c sudoku_solve.c sudoku_check.c main.c
echo Initializing Norminette! Beware of errors now!
norminette -R CheckForbiddenSourceHeader sudoku_grid.c sudoku_solve.c main.c sudoku_check.c
echo Initializing the program with the included main.c! Watch out!
./a.out ".....74.9" "6....3.8." "....8..32" ".1....876" "7..619..5" "563....4." "38..5...." ".7.9....8" "9.58....." | cat -e
