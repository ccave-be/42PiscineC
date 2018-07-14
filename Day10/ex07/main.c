/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 13:21:52 by mcols             #+#    #+#             */
/*   Updated: 2018/07/03 13:21:54 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_sort_wordtab(char **tab);

int		main(void)
{
	char	**array;
	int		i;

	i = -1;
	array = (char **)malloc(sizeof(char *) + 3);
	array[0] = "asdf";
	array[1] = "dfdf";
	array[2] = "df";
	ft_sort_wordtab(array);
	while (++i < 3)
		printf("%s ", array[i]);
	return (0);
}
