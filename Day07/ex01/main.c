/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 19:53:54 by mcols             #+#    #+#             */
/*   Updated: 2018/06/27 19:53:57 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int 	*ft_range(int min, int max);

void 	ft_int_arry_print(int *a)
{
	int		i;

	i = 0;
	while (a[i] != '\0')
	{
		printf("%d", a[i]);
		i++;
	}
}

int		main(void)
{
	int		*range;
	int		*range2;
	int		*range3;
	int		*range4;

	range = ft_range(1, 5);
	range2 = ft_range(-1, -5);
	range3 = ft_range(-5, -1);
	range4 = ft_range(0, 0);
	ft_int_arry_print(range);
	ft_int_arry_print(range3);
	return (0);
}

/*
	Make the absolute value between the two numbebers to have the lenght of
	the integer array and to add the values to it.
	You can not print range2 and range4 because it return 0 and creates a segmentation
	fault.
*/
