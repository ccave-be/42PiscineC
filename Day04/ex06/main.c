/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 15:40:38 by mcols             #+#    #+#             */
/*   Updated: 2018/06/23 15:40:40 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb);

int		main(void)
{
	printf("%d  ", ft_is_prime(17));
	printf("%d  ", ft_is_prime(1));
	printf("%d  ", ft_is_prime(15));
	printf("%d  ", ft_is_prime(2));
	printf("%d  ", ft_is_prime(-7));

	return (0);
}
