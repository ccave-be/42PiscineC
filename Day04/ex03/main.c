/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 01:52:34 by mcols             #+#    #+#             */
/*   Updated: 2018/06/23 01:52:37 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power);

int		main(void)
{
	printf("%d ", ft_recursive_power(2, 2));
	printf("%d ", ft_recursive_power(2, 1));
	printf("%d ", ft_recursive_power(2, 0));
	printf("%d ", ft_recursive_power(2, -1));
	printf("%d ", ft_recursive_power(2, 4));
	printf("%d ", ft_recursive_power(5, 3));
	printf("%d ", ft_recursive_power(3, 5));
	return (0);
}
