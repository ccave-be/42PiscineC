/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 19:56:47 by mcols             #+#    #+#             */
/*   Updated: 2018/07/04 19:56:49 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		ft_strlen(char *s)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr(char *s)
{
	write(1, s, ft_strlen(s));
}

void	ft_puterr(char *s)
{
	write(2, s, ft_strlen(s));
}

void	ft_error(int type)
{
	if (type == 0)
		ft_puterr("File name missing.\n");
	else if (type == 1)
		ft_puterr("Too many arguments.\n");
}

void	ft_display_file(char **argv)
{
	int		fl;
	int		rd;
	char	buf[BUF_SIZE + 1];

	fl = open(argv[1], O_RDONLY);
	rd = 1;
	if (fl != -1)
		while (rd)
		{
			rd = read(fl, buf, 2);
			buf[rd] = '\0';
			ft_putstr(buf);
		}
	close(fl);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_display_file(argv);
	else if (argc < 2)
		ft_error(0);
	else if (argc > 2)
		ft_error(1);
	return (0);
}
