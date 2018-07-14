/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 22:45:57 by mcols             #+#    #+#             */
/*   Updated: 2018/06/26 22:45:59 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_swap(char **argv, int a, int b)
{
	char	*temp;

	temp = argv[a];
	argv[a] = argv[b];
	argv[b] = temp;
}

int		ft_strcmp(char *a, char *b)
{
	while (*a != '\0' || *b != '\0')
	{
		if (*a != *b)
			return (*a - *b);
		a++;
		b++;
	}
	return (0);
}

void	ft_selection_sort(char **argv)
{
	int		i;
	int		j;
	int		min_val;

	i = 1;
	while (argv[i] != '\0')
	{
		j = i;
		min_val = i;
		while (argv[j] != '\0')
		{
			if (ft_strcmp(argv[j], argv[min_val]) < 0)
				min_val = j;
			j++;
		}
		ft_swap(argv, i, min_val);
		i++;
	}
}

void	ft_sort_params(char **argv)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	ft_selection_sort(argv);
	while (argv[i] != '\0')
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	argc = 0;
	ft_sort_params(argv);
	return (0);
}
