/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 16:37:47 by mcols             #+#    #+#             */
/*   Updated: 2018/07/04 16:37:49 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*elem;

	elem = begin_list;
	while (elem)
	{
		if ((*cmp)(elem->data, data_ref) == 0)
			return (elem);
		elem = elem->next;
	}
	return (0);
}
