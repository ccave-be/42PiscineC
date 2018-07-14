/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 20:58:45 by mcols             #+#    #+#             */
/*   Updated: 2018/06/21 20:58:49 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_ascii_print(int c)
{
	ft_putchar(c / 10 + '0');
	ft_putchar(c % 10 + '0');
}

void	ft_print_comb2(void)
{
	int		first_number;
	int		second_number;

	first_number = 0;
	second_number = 0;
	while (first_number < 99)
	{
		second_number = first_number + 1;
		while (second_number <= 99)
		{
			ft_ascii_print(first_number);
			ft_putchar(' ');
			ft_ascii_print(second_number);
			if (first_number != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			second_number++;
		}
		first_number++;
	}
}
