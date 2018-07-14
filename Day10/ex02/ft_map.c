/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 16:26:50 by mcols             #+#    #+#             */
/*   Updated: 2018/07/02 16:26:51 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*array;

	i = -1;
	array = (int *)malloc(sizeof(int) * length);
	while (++i < length)
		array[i] = f(tab[i]);
	return (array);
}
