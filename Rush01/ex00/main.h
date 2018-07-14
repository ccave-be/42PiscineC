/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 21:51:14 by mcols             #+#    #+#             */
/*   Updated: 2018/07/01 21:51:16 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

int		ft_create_sudoku(int sudoku[9][9], int argc, char **argv);
void	ft_show_sudoku(int	sudoku[9][9]);
void	ft_solve(int sudoku[9][9]);
void	ft_show_error(void);
int		ft_check_multiple(int sudoku[9][9]);

#endif
