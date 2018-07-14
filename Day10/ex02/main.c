/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 17:52:58 by mcols             #+#    #+#             */
/*   Updated: 2018/07/02 17:53:00 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_map(int *tab, int length, int (*f)(int));

int		ft_addtwo(int i)
{
	return (i + 5);
}

int		main(void)
{
	int		*result;
	int		i;

	result = (int *)malloc(sizeof(int) * 10);
	i = -1;
	while (++i < 10)
		result[i] = i;
	result = ft_map(result, 10, ft_addtwo);
	i = -1;
	while (++i < 10)
		printf("%d ", result[i]);

	return (0);
}
