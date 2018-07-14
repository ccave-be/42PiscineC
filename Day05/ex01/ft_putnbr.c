/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 09:19:13 by mcols             #+#    #+#             */
/*   Updated: 2018/06/25 09:19:15 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int			shift_counter;
	int			shift;
	long int	r;

	r = nb;
	shift_counter = r / 10;
	shift = 1;
	if (r < 0)
	{
		ft_putchar('-');
		r *= -1;
	}
	while (shift_counter)
	{
		shift_counter /= 10;
		shift *= 10;
	}
	while (shift)
	{
		ft_putchar(r / shift + '0');
		r = r % shift;
		shift /= 10;
	}
}
