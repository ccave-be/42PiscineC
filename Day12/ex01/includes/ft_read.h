/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 15:53:01 by mcols             #+#    #+#             */
/*   Updated: 2018/07/05 15:53:02 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_READ_H

# define FT_READ_H
# define BUF_SIZE 30
# include <sys/types.h>
# include <unistd.h>
# include <errno.h>

void	ft_error(char *file_name);

#endif
