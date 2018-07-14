/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 18:30:01 by mcols             #+#    #+#             */
/*   Updated: 2018/07/02 18:30:02 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		ft_operate(int nb1, int nb2, char op)
{
	int		(*f)(int, int);

	if (op == '+')
		f = &ft_plus;
	else if (op == '-')
		f = &ft_less;
	else if (op == '*')
		f = &ft_multiplied;
	else if (op == '/')
		f = &ft_divided;
	else
		f = &ft_modulo;
	return (f(nb1, nb2));
}

int		main(int argc, char **argv)
{
	int		n1;
	int		n2;
	int		checker;

	n1 = 0;
	n2 = 0;
	checker = ft_checker(argc, argv);
	if (checker == 1)
	{
		n1 = ft_atoi(argv[1]);
		n2 = ft_atoi(argv[3]);
		if (n2 == 0 && (argv[2][0] == '%' || argv[2][0] == '/'))
		{
			ft_putstr("Stop : division by zero\n");
			return (0);
		}
		ft_putnbr(ft_operate(n1, n2, argv[2][0]));
		ft_putstr("\n");
	}
	else if (checker == -1)
		ft_putnbr(0);
	return (0);
}
