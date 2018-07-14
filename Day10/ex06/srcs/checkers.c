/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 18:30:28 by mcols             #+#    #+#             */
/*   Updated: 2018/07/02 18:30:30 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_operator(char *op)
{
	int		i;

	i = 0;
	while (op[i] != '\0')
		i++;
	if (i != 1)
		return (0);
	else if (op[0] == '+' || op[0] == '-' || op[0] == '*'
			|| op[0] == '/' || op[0] == '%')
		return (1);
	return (0);
}

int		ft_checker(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	else if (ft_check_operator(argv[2]))
		return (1);
	return (-1);
}
