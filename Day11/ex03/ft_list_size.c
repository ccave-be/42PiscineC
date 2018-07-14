/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 19:35:58 by mcols             #+#    #+#             */
/*   Updated: 2018/07/03 19:36:00 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int			i;
	t_list		*next_elem;

	i = 0;
	if (begin_list)
	{
		i++;
		next_elem = begin_list->next;
		while (next_elem)
		{
			next_elem = next_elem->next;
			i++;
		}
	}
	return (i);
}
