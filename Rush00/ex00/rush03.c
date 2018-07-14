/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 21:46:14 by mcols             #+#    #+#             */
/*   Updated: 2018/06/24 21:46:24 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "ft_putchar.c"

void	ft_newline(int j, int x)
{
	if (x == j)
		ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		i;
	int		j;

	i = 0;
	while (++i <= y)
	{
		j = 0;
		while (++j <= x)
		{
			if (j == 1 || j == x)
			{
				if (j == 1 && (i == 1 || i == y))
					ft_putchar('A');
				else if (j == x && (i == 1 || i == y))
					ft_putchar('C');
				else
					ft_putchar('B');
			}
			else if (i == 1 || i == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
			ft_newline(j, x);
		}
	}
}
