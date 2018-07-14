/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 15:52:22 by mcols             #+#    #+#             */
/*   Updated: 2018/07/01 15:52:29 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_row(int sudoku[9][9], int cell[2])
{
	int i;

	i = -1;
	while (++i < 9)
		if (cell[0] != i && sudoku[i][cell[1]] == sudoku[cell[0]][cell[1]])
			return (0);
	return (1);
}

int		ft_check_column(int sudoku[9][9], int cell[2])
{
	int j;

	j = -1;
	while (++j < 9)
		if (cell[1] != j && sudoku[cell[0]][j] == sudoku[cell[0]][cell[1]])
			return (0);
	return (1);
}

int		ft_check_box(int sudoku[9][9], int cell[2])
{
	int		i;
	int		j;
	int		j_temp;
	int		i_end;
	int		j_end;

	i = ((cell[0] / 3) * 3) - 1;
	j = ((cell[1] / 3) * 3) - 1;
	j_temp = j;
	i_end = i + 4;
	j_end = j + 4;
	while (++i < i_end)
	{
		j = j_temp;
		while (++j < j_end)
			if (i != cell[0] && j != cell[1])
				if (sudoku[i][j] == sudoku[cell[0]][cell[1]])
					return (0);
	}
	return (1);
}

int		ft_check_multiple(int sudoku[9][9])
{
	int		count;
	int		i;
	int		j;

	i = -1;
	count = 0;
	while (++i < 9)
	{
		j = -1;
		while (++j < 9)
		{
			if (sudoku[i][j] != 0)
				count++;
		}
	}
	if (count < 17)
	{
		return (0);
	}
	return (1);
}

int		ft_check(int sudoku[9][9], int cell[2], int match)
{
	sudoku[cell[0]][cell[1]] = match;
	if (ft_check_box(sudoku, cell)
		&& ft_check_column(sudoku, cell)
		&& ft_check_row(sudoku, cell))
	{
		sudoku[cell[0]][cell[1]] = 0;
		return (1);
	}
	sudoku[cell[0]][cell[1]] = 0;
	return (0);
}
