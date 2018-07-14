/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 16:02:10 by mcols             #+#    #+#             */
/*   Updated: 2018/06/29 16:02:12 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H

# define FT_STOCK_PAR_H
typedef struct s_stock_par
{
	int	size_param;
	char **str;
	char *copy;
	char **tab;
}				t_stock_par;

#endif
