/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 09:19:20 by mcols             #+#    #+#             */
/*   Updated: 2018/06/25 09:19:22 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}


int		main(void)
{
	printf("%d ", ft_atoi("\t\n\v\f\r +256"));
	printf("%d", atoi("\t\n\v\f\r +256"));
	return (0);
}
