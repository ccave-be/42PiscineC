/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 11:29:08 by mcols             #+#    #+#             */
/*   Updated: 2018/06/22 11:29:10 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrev(char *str);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(void)
{
	char str[] ="acvdsav";
	char *a = &str[0];
	a = ft_strrev(a);
	ft_putstr(a);
	return (0);
}
