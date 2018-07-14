/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:51:42 by mcols             #+#    #+#             */
/*   Updated: 2018/06/28 12:51:44 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_concat_params(int argc, char **argv);
int		ft_argv_len(int argc, char **argv);

void	ft_printstr(char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		write(1, &src[i], 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	char	*str;
	int		nb;
	str = ft_concat_params(argc, argv);
	nb = ft_argv_len(argc, argv);
	printf("Len: %d\n Result: ", nb);
	ft_printstr(str);
	return (0);
}

/*
	Create a char pointer with enought space for storing all the leters
	and enters and the closing of the array.
	I iterate at every pointer of the doble pointer and get every character
	added to the string. If its the last one add the closing if not add
	the enter. 
*/
