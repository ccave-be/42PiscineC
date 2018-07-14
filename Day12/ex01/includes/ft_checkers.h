/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkers.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 15:52:53 by mcols             #+#    #+#             */
/*   Updated: 2018/07/05 15:52:55 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CHECKERS_H

# define FT_CHECKERS_H
# define FT_CHECK_DOBLE_DASH(x) x[0] == '-' && x[1] == '-' && x[2] == '\0'
# define FT_CHECK_DASH(x) x[0] == '-' && x[1] == '\0'
# define FT_CHECK_COPY(x) x[0] == '>' && x[1] == '\0'
# define FT_CHECK_APPEND(x) x[0] == '>' && x[1] == '>' && x[2] == '\0'
# define FT_NOT_COMMAND(x) !x[0] && !x[2] && !x[3] 
# include <unistd.h>
# include <errno.h>
# include <fcntl.h>

void	ft_read_sd_input(void);
void	ft_read_file(int fl, char *file_name);
void	ft_error(char *file_name);

#endif
