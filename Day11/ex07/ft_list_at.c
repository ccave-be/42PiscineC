/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 22:31:22 by mcols             #+#    #+#             */
/*   Updated: 2018/07/03 22:31:24 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*temp;
	unsigned int	i;

	i = 0;
	temp = begin_list;
	while (temp && i <= nbr)
	{
		if (i == nbr)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (0);
}
