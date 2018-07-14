/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 15:50:31 by mcols             #+#    #+#             */
/*   Updated: 2018/07/05 15:50:33 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_read.h"

void	ft_putstr(char *str)
{
	int		i;

	i = -1;
	while (str[++i] != '\0')
		write(1, &str[i], 1);
}

void	ft_read_sd_input(void)
{
	int		rd;
	char	buf;

	rd = 1;
	while (rd != 0)
	{
		rd = read(0, &buf, 1);
		write(1, &buf, 1);
	}
}

int		ft_read_file(int fl, char *file_name)
{
	int		rd;
	char	buf[BUF_SIZE + 1];

	rd = 1;
	while (rd && fl != -1)
	{
		rd = read(fl, buf, BUF_SIZE);
		buf[rd] = '\0';
		if (errno != 0)
		{
			ft_error(file_name);
			break ;
		}
		else
			ft_putstr(buf);
	}
	return (0);
}
