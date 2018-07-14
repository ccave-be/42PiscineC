/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 21:30:15 by mcols             #+#    #+#             */
/*   Updated: 2018/06/27 21:30:17 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_diff_absolute(int a, int b)
{
	int		result;

	result = (b - a > 0) ? b - a : (b - a) * -1;
	return (result);
}

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		j;
	int		diff;

	diff = ft_diff_absolute(min, max);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * diff);
	i = 0;
	j = min;
	while (i < diff)
	{
		range[0][i] = j;
		j++;
		i++;
	}
	return (diff);
}
