/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_grid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 13:09:07 by mcols             #+#    #+#             */
/*   Updated: 2018/07/01 13:09:09 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku_grid.h"

int		ft_show_error(void)
{
	write(1, "Error\n", 6);
	return (0);
}

int		ft_check_col_len(char *argv)
{
	int		i;

	i = 0;
	while (argv[i] != '\0')
	{
		i++;
	}
	return ((i == 9) ? 1 : 0);
}

int		ft_create_sudoku(int sudoku[9][9], int argc, char **argv)
{
	int		i;
	int		j;

	if (argc == 10)
	{
		i = -1;
		while (++i < 9)
		{
			j = -1;
			while (++j < 9)
			{
				if (!ft_check_col_len(argv[i + 1]))
					return (ft_show_error());
				if (FT_CHECK_DECIMAL(argv[i + 1][j]))
					sudoku[i][j] = (int)argv[i + 1][j] - '0';
				else if (argv[i + 1][j] == '.')
					sudoku[i][j] = 0;
				else
					return (ft_show_error());
			}
		}
		return (1);
	}
	return (ft_show_error());
}

void	ft_show_sudoku(int sudoku[9][9])
{
	int		i;
	int		j;
	char	c;

	i = -1;
	while (++i < 9)
	{
		j = -1;
		while (++j < 9)
		{
			c = sudoku[i][j] + '0';
			write(1, &c, 1);
			if (j != 8)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
}

int		ft_find_unsigned(int sudoku[9][9], int cell[2])
{
	int		i;
	int		j;
	int		finded;

	i = -1;
	finded = 0;
	while (++i < 9 && finded == 0)
	{
		j = -1;
		while (++j < 9 && finded == 0)
		{
			if (sudoku[i][j] == 0)
			{
				cell[0] = i;
				cell[1] = j;
				finded = 1;
			}
		}
	}
	return ((finded == 0) ? 0 : 1);
}
