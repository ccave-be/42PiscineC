/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 13:08:55 by mcols             #+#    #+#             */
/*   Updated: 2018/07/01 13:08:56 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		main(int argc, char **argv)
{
	int		sudoku[9][9];

	if (ft_create_sudoku(sudoku, argc, argv))
	{
		if (!ft_check_multiple(sudoku))
			ft_show_error();
		else
		{
			ft_solve(sudoku);
			ft_show_sudoku(sudoku);
		}
		return (1);
	}
	return (0);
}
