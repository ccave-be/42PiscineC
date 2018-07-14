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
	int		i;

	char	*str = "   \t\n";
	i = 0;
	split = ft_split_whitespaces(str);
	while (split[i] != '\0')
	{
		printf("%s", split[i]);
		i++;
	}
	return (0);
}
