/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 13:16:30 by mcols             #+#    #+#             */
/*   Updated: 2018/06/26 13:16:31 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char str[] = "asdf qWeRtY ZXCV 100TIS\n";
	char	*p_str;
	p_str = str;
	printf("%s", ft_strcapitalize(p_str));
	return (0);
}
