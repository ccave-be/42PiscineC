/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_solve.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 13:09:15 by mcols             #+#    #+#             */
/*   Updated: 2018/07/01 13:09:17 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku_solve.h"

int		ft_solve(int sudoku[9][9])
{
	int			i;
	int			cell[2];

	i = 0;
	cell[0] = 0;
	cell[1] = 0;
	if (!ft_find_unsigned(sudoku, cell))
		return (1);
	while (++i <= 9)
	{
		if (ft_check(sudoku, cell, i))
		{
			sudoku[cell[0]][cell[1]] = i;
			if (ft_solve(sudoku))
				return (1);
			sudoku[cell[0]][cell[1]] = 0;
		}
	}
	return (0);
}
