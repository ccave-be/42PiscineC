/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otahirov <otahirov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 12:36:48 by otahirov          #+#    #+#             */
/*   Updated: 2018/07/11 15:32:00 by otahirov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

static	void	logic(char *file_name)
{
	void	**instructions;

	instructions = checker(file_name, get_instr(file_name));
	if (instructions != 0)
	{
		INS(int, 4) -= 1;
		find_square(file_name, instructions);
		display(file_name, instructions);
	}
	else
		write(2, "map error\n", 10);
}

int				main(int ac, char **av)
{
	char	*name;
	int		i;

	i = 1;
	if (ac >= 1)
	{
		if (ac != 1)
		{
			while (i < ac)
			{
				logic(av[i]);
				if (i + 1 != ac)
					write(1, "\n", 1);
				i++;
			}
		}
		else
		{
			name = store_in_file();
			logic(name);
		}
	}
	return (0);
}
