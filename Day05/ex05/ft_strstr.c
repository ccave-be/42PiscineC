/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 19:34:06 by mcols             #+#    #+#             */
/*   Updated: 2018/06/25 19:34:09 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*p_str;
	char	*p_to_find;

	while (*str)
	{
		p_str = str;
		p_to_find = to_find;
		while (*str && *p_to_find && *str == *p_to_find)
		{
			str++;
			p_to_find++;
		}
		if (!(*p_to_find))
			return (p_str);
		str = p_str + 1;
	}
	return (0);
}
