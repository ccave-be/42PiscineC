/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 21:31:54 by mcols             #+#    #+#             */
/*   Updated: 2018/06/26 21:31:56 by mcols            ###   ########.fr       */
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

void	ft_print_params(int argc, char **argv)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	ft_print_params(argc, argv);
	return (0);
}
