/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 14:33:33 by mcols             #+#    #+#             */
/*   Updated: 2018/06/28 14:33:35 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split_whitespaces(char *string);

int		main(void)
{
	char	**split;

	char	*str = " asdf qwerty zxcv";

	split = ft_split_whitespaces(str);
	while (**split)
	{
		printf("%s ", *split);
		split++;
	}
	printf("\n");

	return (0);
}
