/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 17:14:06 by mcols             #+#    #+#             */
/*   Updated: 2018/06/21 17:23:29 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		quotient;
	int		remainder;

	quotient = *a / *b;
	remainder = *a % *b;
	*a = quotient;
	*b = remainder;
}
