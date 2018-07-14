/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 16:20:46 by mcols             #+#    #+#             */
/*   Updated: 2018/07/04 16:20:48 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
							void *data_ref, int (*cmp)())
{
	t_list	*elem;

	elem = begin_list;
	while (elem)
	{
		if ((*cmp)(elem->data, data_ref) == 0)
			(*f)(elem->data);
		elem = elem->next;
	}
}
