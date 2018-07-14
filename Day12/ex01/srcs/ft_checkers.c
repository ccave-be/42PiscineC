/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 15:50:13 by mcols             #+#    #+#             */
/*   Updated: 2018/07/05 15:50:15 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_checkers.h"
#include <stdio.h>

void	ft_cat(int argc, char **files, int *command)
{
	int		j;
	int		fl;

	j = -1;
	fl = 0;
	if ((argc < 3 && (command[0] || command[1])) || argc == 1)
		ft_read_sd_input();
	else
	{
		while (files[++j] != '\0')
		{
			fl = open(files[j], O_RDONLY);
			if (errno != 0)
				ft_error(files[j]);
			else
				ft_read_file(fl, files[j]);
			close(fl);
		}
		if (command[0])
			ft_read_sd_input();
	}
}

void	ft_check_arg(int argc, char **argv)
{
	int		i;
	int		j;
	int		command[4];
	char	*files[argc];

	i = 0;
	j = -1;
	command[0] = 0;
	command[1] = 0;
	command[2] = 0;
	command[3] = 0;
	if (argv[1] != '\0' && FT_CHECK_DOBLE_DASH(argv[1]))
	{
		command[1] = 1;
		i++;
	}
	while (++i < argc && !command[0])
		if (FT_CHECK_DASH(argv[i]))
			command[0] = 1;
		else
			files[++j] = argv[i];
		printf("%s", files[j]);
	files[++j] = 0;
	ft_cat(argc, files, command);
}
