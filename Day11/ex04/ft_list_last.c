/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 19:54:16 by mcols             #+#    #+#             */
/*   Updated: 2018/07/03 19:54:18 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_last(t_list *begin_list)
{
	t_list	*elem;
	t_list	*temp;

	if (begin_list)
	{
		temp = begin_list;
		elem = begin_list->next;
		while (elem)
		{
			temp = elem;
			elem = elem->next;
		}
		return (temp);
	}
	return (begin_list);
}
