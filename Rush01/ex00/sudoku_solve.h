/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_solve.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 21:50:54 by mcols             #+#    #+#             */
/*   Updated: 2018/07/01 21:50:55 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_SOLVE_H
# define SUDOKU_SOLVE_H

int		ft_find_unsigned(int sudoku[9][9], int cell[2]);
int		ft_check(int sudoku[9][9], int cell[2], int match);

#endif
