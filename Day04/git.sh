# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    git.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otahirov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/23 00:31:50 by otahirov          #+#    #+#              #
#    Updated: 2018/06/23 02:23:21 by otahirov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
# Make sure this is executable
# Ex: if you are in the project's folder... sh ~/.../git.sh Comment filename
# !!! Use exact filename
# !!! Make sure that Comment is in "" marks
# !!! You have to be bound to the vogsphere or else it would not work
# !!! If you want to use the towel make sure it is downloaded and then change PATH_TOWEL to the path
# Ex: ~/.../towel
# !!! Make sure to have the path from root (ex: /nfs/2018/o/otahirov/.../towel.sh )
PATH_T='/nfs/2018/o/otahirov/tower/towel.sh'
echo Adding the file to the git rep!
git add $2
echo Commiting!
git commit -m $1
echo Pushing!
git push
