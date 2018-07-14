/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:51:36 by mcols             #+#    #+#             */
/*   Updated: 2018/06/28 12:51:38 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_argv_len(int argc, char **argv)
{
	int		i;
	int		j;
	int		nb;

	i = 1;
	nb = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			nb++;
			j++;
		}
		nb++;
		i++;
	}
	return (nb);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		s;
	char	*str;

	i = 0;
	s = 0;
	str = (char *)malloc(sizeof(char) * ft_argv_len(argc, argv));
	while (++i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
			str[s++] = argv[i][j++];
		str[s++] = (i != argc - 1) ? '\n' : '\0';
	}
	return (str);
}
