/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 15:52:37 by mcols             #+#    #+#             */
/*   Updated: 2018/07/05 15:52:38 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_errors.h"

void	ft_puterr(char *str)
{
	int		i;

	i = -1;
	while (str[++i] != '\0')
		write(2, &str[i], 1);
}

void	ft_error(char *file_name)
{
	ft_puterr("ft_cat: ");
	ft_puterr(file_name);
	if (errno == 2)
		ft_puterr(": No such file or directory\n");
	else if (errno == 13)
		ft_puterr(": Permission denied\n");
	else if (errno == 21)
		ft_puterr(": Is a directory\n");
}
