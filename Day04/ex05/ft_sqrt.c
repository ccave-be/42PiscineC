/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 05:52:15 by mcols             #+#    #+#             */
/*   Updated: 2018/06/23 05:52:20 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	ft_absolute(double i)
{
	if (i < 0)
		return (i * (-1));
	return (i);
}

int		ft_power(int base, int power)
{
	if (power < 0)
		return (0);
	while (power >= 1)
		return (base * ft_power(base, power - 1));
	return (1);
}

/*
** Babylonian method
*/

int		ft_sqrt(int nb)
{
	double		x_n;
	double		x_p;

	x_n = 50;
	x_p = 0;
	if (nb < 0)
		return (0);
	while (ft_absolute(x_n - x_p) > 0.001)
	{
		x_p = x_n;
		x_n = 0.5 * (x_p + nb / x_p);
	}
	if (ft_power(x_n, 2) == nb)
		return (x_n);
	return (0);
}
