/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 16:37:53 by mcols             #+#    #+#             */
/*   Updated: 2018/06/27 16:37:54 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int		main(void)
{
	char	*cpy;
	char	*src;
	int		i;

	i = 0;
	src = (char *)malloc(sizeof(*src) * 8);
	while (i < 8)
	{
		src[i] = 'h';
		i++;
	}
	src[i] = '\0';
	printf("%lu ", sizeof(src));
	cpy = ft_strdup(src);
	printf("%s ", cpy);
	printf("%lu", sizeof(cpy));
	return (0);
}

/*
	Create an array of size of 1 byte and length of the src.
	If malloc returns 0 is because have run out of memory.
	If not runs de ft_strcpy to copy all the contents from the src.
*/
