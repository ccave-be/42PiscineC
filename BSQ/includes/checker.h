/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otahirov <otahirov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 20:37:27 by mcols             #+#    #+#             */
/*   Updated: 2018/07/11 14:35:16 by otahirov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H

# define CHECKER_H
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

# define FT_EQ1(x) *(char *)x[1] == *(char *)x[2]
# define FT_EQ2(x) *(char *)x[2] == *(char *)x[3]
# define FT_EQ3(x) *(char *)x[3] == *(char *)x[1]
# define FT_CHARS_EQ(x) FT_EQ1(x) || FT_EQ2(x) || FT_EQ3(x)

#endif
