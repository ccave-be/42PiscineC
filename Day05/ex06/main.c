/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 11:51:51 by mcols             #+#    #+#             */
/*   Updated: 2018/06/26 11:51:53 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	printf("%d\n", ft_strcmp("A", ""));
	printf("%d\n", ft_strcmp("", ""));
	printf("%d\n", ft_strcmp("", "A"));
	printf("%d\n", ft_strcmp("asde", "asdf"));
	printf("%d\n", ft_strcmp("asdf", "asdf"));
	printf("%d\n", ft_strcmp("asdg", "asdf"));
	return (0);
}
