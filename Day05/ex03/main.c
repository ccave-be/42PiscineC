/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 19:02:07 by mcols             #+#    #+#             */
/*   Updated: 2018/06/25 19:02:09 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char test1[256] = "asdf";
	printf("%s", ft_strcpy(test1, "qwerty\n"));
	printf("%s", ft_strcpy(test1, ""));
	printf("%s", ft_strcpy(test1, "hell0\n"));
	return (0);
}
