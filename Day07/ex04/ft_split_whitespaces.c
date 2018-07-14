/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 14:33:28 by mcols             #+#    #+#             */
/*   Updated: 2018/06/28 14:33:29 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_white_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else
		return (0);
}

int		ft_count_words(char *str)
{
	int		nb;
	int		f_word;

	nb = 0;
	f_word = 0;
	while (*str)
	{
		if (ft_is_white_space(*str))
		{
			str++;
			f_word = 0;
		}
		else
		{
			if (f_word == 0)
				nb++;
			f_word = 1;
			str++;
		}
	}
	return (nb);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

char	**ft_split_whitespaces(char *str)
{
	char	**split;
	int		i;
	int		j;

	i = 0;
	j = 0;
	split = (char **)malloc(sizeof(char *) * (ft_count_words(str) + 1));
	split[i] = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	while (*str)
	{
		if (ft_is_white_space(*str))
		{
			while (ft_is_white_space(*str))
				str++;
			split[i++] = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
			j = 0;
		}
		else
		{
			split[i][j++] = *str;
			str++;
		}
	}
	return (split);
}
