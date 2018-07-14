/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 13:16:24 by mcols             #+#    #+#             */
/*   Updated: 2018/06/26 13:16:26 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isletter(char c)
{
	if (c < 91 && c > 64)
		return (2);
	else if (c < 123 && c > 96)
		return (1);
	else if (c < 58 && c > 47)
		return (3);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		capital;

	i = 0;
	capital = 0;
	if (ft_isletter(str[i++]) == 1)
		str[i - 1] -= 32;
	while (str[i] != '\0')
	{
		if ((ft_isletter(str[i - 1]) == 0 ||
		ft_isletter(str[i - 1]) == 3) && ft_isletter(str[i]) == 1)
			str[i] -= 32;
		else if (ft_isletter(str[i - 1]) > 0 && ft_isletter(str[i]) == 2)
			str[i] += 32;
		i++;
	}
	return (str);
}
