/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 16:10:55 by mcols             #+#    #+#             */
/*   Updated: 2018/06/26 16:10:57 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import <stdio.h>

int		ft_str_is_printable(char *str);

int		main(void)
{
	char	hi[4];
	char	*p_hi;

	hi[0] = '1';
	hi[1] = '2';
	hi[2] = '2';
	hi[3] = 'D';
	p_hi = hi;
	printf("%d", ft_str_is_printable(p_hi));
	return (0);
}
