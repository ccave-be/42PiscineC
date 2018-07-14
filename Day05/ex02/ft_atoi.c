/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 09:51:25 by mcols             #+#    #+#             */
/*   Updated: 2018/06/25 09:51:27 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_number(int *number)
{
	number[0] = 0;
	number[1] = 0;
}

int		ft_atoi(char *str)
{
	int		i;
	int		nb;
	int		number[2];

	i = 0;
	nb = 0;
	ft_number(number);
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			number[0] = 2;
		else if (str[i] >= 48 && str[i] <= 57)
		{
			number[0] = (number[0] == 2 || number[0] == 1) ? 1 : 0;
			number[1] = 1;
			nb = (str[i] - '0') + nb * 10;
		}
		else
		{
			if (number[0] == 2 || number[1] == 1)
				break ;
		}
		i++;
	}
	return ((number[0] == 1 || number[0] == 2) ? nb * -1 : nb);
}
