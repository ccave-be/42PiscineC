/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 21:48:34 by mcols             #+#    #+#             */
/*   Updated: 2018/06/26 21:48:36 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *c)
{
	int		i;

	i = 0;
	while (c[i] != '\0')
	{
		ft_putchar(c[i]);
		i++;
	}
}

void	ft_rev_params(int argv, char **argc)
{
	while (argv - 1 > 0)
	{
		ft_putstr(argc[argv - 1]);
		ft_putchar('\n');
		argv--;
	}
}

int		main(int argv, char **argc)
{
	ft_rev_params(argv, argc);
	return (0);
}
