/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 19:45:56 by mcols             #+#    #+#             */
/*   Updated: 2018/06/23 19:45:59 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_find_next_prime(int nb);

int		main(void)
{
	printf("%d  ", ft_find_next_prime(17));
	printf("%d  ", ft_find_next_prime(1));
	printf("%d  ", ft_find_next_prime(15));
	printf("%d  ", ft_find_next_prime(1));
	printf("%d  ", ft_find_next_prime(0));

	return (0);
}
