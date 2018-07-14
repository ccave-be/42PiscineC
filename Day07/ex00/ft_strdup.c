/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 16:37:45 by mcols             #+#    #+#             */
/*   Updated: 2018/06/27 16:37:47 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *cpy, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		len;

	len = ft_strlen(src);
	cpy = (char *)malloc(len + 1);
	if (cpy == 0)
		return (0);
	cpy = ft_strcpy(cpy, src);
	return (cpy);
}
