#!/bin/sh
# First of all make sure that run.sh have execute permission
# Example: ./run.sh filename
# Attention! Put the filename without .c
gcc -Wall -Wextra -Werror main.c $1.c -o $1
norminette -R CheckForbiddenSourceHeader $1.c
./$1
