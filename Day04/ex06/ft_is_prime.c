/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 15:40:31 by mcols             #+#    #+#             */
/*   Updated: 2018/06/23 15:40:34 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_positive(int nb)
{
	if (nb < 0)
		return (1);
	return (nb);
}

int		ft_is_prime(int nb)
{
	int		primes[ft_is_positive(nb)];
	int		primes_index;
	int		i;
	int		j;

	i = 1;
	primes[0] = 2;
	primes_index = 1;
	while (++i <= nb)
	{
		j = -1;
		while (++j < primes_index)
		{
			if (i % primes[j] == 0 && nb != 2)
				break ;
		}
		if (j == primes_index)
		{
			primes[primes_index] = i;
			if (nb == primes[primes_index])
				return (1);
			primes_index++;
		}
	}
	return (0);
}
