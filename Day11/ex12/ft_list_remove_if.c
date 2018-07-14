/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 17:18:03 by mcols             #+#    #+#             */
/*   Updated: 2018/07/04 17:18:04 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list		*elem;
	t_list		*temp;
	t_list		*prev;

	elem = *begin_list;
	temp = 0;
	prev = 0;
	while (elem)
	{
		temp = elem->next;
		if ((*cmp)(elem->data, data_ref) == 0)
		{
			free(elem);
			if (elem == *begin_list)
			{
				prev = temp;
				*begin_list = temp;
			}
			prev->next = temp;
		}
		prev = elem;
		elem = temp;
	}
}
