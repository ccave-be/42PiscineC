/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 19:09:50 by mcols             #+#    #+#             */
/*   Updated: 2018/06/25 19:09:52 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		if (src[i] != '\0' && i < n)
			dest[i] = src[i];
		else if (i < n)
			dest[i] = 0;
		i++;
	}
	return (dest);
}
