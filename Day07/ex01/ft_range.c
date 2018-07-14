/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 19:53:48 by mcols             #+#    #+#             */
/*   Updated: 2018/06/27 19:53:50 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_diff_absolute(int a, int b)
{
	int		result;

	result = (b - a > 0) ? b - a : (b - a) * -1;
	return (result);
}

int		*ft_range(int min, int max)
{
	int		i;
	int		j;
	int		*range;
	int		diff;

	diff = ft_diff_absolute(min, max);
	if (min >= max)
		return (0);
	range = (int *)malloc(sizeof(*range) * (diff + 1));
	i = 0;
	j = min;
	while (i < diff)
	{
		range[i] = j;
		j++;
		i++;
	}
	range[i] = '\0';
	return (range);
}
