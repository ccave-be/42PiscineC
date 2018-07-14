/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 19:09:55 by mcols             #+#    #+#             */
/*   Updated: 2018/06/25 19:09:57 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char str1[]= "To be or not to be";
	char str2[40];
	char str3[40];

	/* copy to sized buffer (overflow safe): */
	ft_strncpy( str2, str1, sizeof(str2) );

	/* partial copy (only 5 chars): */
	ft_strncpy( str3, str2, 5 );
	str3[5] = '\0';   /* null character manually added */

	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);
}
