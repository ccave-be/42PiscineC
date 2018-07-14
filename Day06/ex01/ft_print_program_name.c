/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 21:12:11 by mcols             #+#    #+#             */
/*   Updated: 2018/06/26 21:12:13 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_program_name(char **argv)
{
	int		i;

	i = 0;
	while (argv[0][i] != '\0')
	{
		ft_putchar(argv[0][i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	argc = 0;
	ft_print_program_name(argv);
	return (0);
}
