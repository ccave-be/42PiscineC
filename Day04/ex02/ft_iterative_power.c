/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 23:22:26 by mcols             #+#    #+#             */
/*   Updated: 2018/06/22 23:22:30 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		result;

	result = 1;
	if (power < 0)
		return (0);
	while (power-- >= 1)
		result *= nb;
	return (result);
}
