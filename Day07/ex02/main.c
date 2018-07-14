/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 21:30:20 by mcols             #+#    #+#             */
/*   Updated: 2018/06/27 21:30:22 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int 	ft_ultimate_range(int **range, int min, int max);

void 	ft_int_arry_print(int **a)
{
	int		i;

	i = 0;
	while (a[i] != '\0')
	{
		printf("%d", a[0][i]);
		i++;
	}
}

int		main(void)
{
	int *res = NULL;
	int		i;
	int		size;

	i = 0;
	size = ft_ultimate_range(&res, 5, 10);
	printf("Null ? %d\n", res == NULL);
	printf("Size %d\n", size);
	while (i < size)
	{
		printf("%d", res[i]);
		i++;
	}
	res = NULL;
}

/*
	Pass a doble pointer and allocate the integerts to the first pointer.
	If the result is not valid the pointer is set to 0.
	It returns de length of the pointer.
*/
