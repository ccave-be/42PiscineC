/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transforms.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 18:57:45 by mcols             #+#    #+#             */
/*   Updated: 2018/07/02 18:57:46 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "transforms.h"

int		ft_atoi(char *str)
{
	int		nb;
	int		sign;

	sign = 1;
	nb = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\a'
			|| *str == '\b' || *str == '\r' || *str == '\v' || *str == '\f'
			|| *str == '+' || *str == '-')
	{
		if (*str == '+')
			sign = 1;
		else if (*str == '-')
			sign = -1;
		str++;
	}
	while (FT_DIGIT(*str))
	{
		nb = (nb * 10) + (*str - '0');
		str++;
	}
	return (nb * sign);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = -1;
	while (str[++i] != '\0')
		ft_putchar(str[i]);
}

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
