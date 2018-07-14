/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 12:10:08 by mcols             #+#    #+#             */
/*   Updated: 2018/07/04 12:10:10 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list		*next;
	t_list		*element;
	t_list		*prev_element;

	element = *begin_list;
	next = 0;
	prev_element = 0;
	while (element)
	{
		next = element->next;
		element->next = prev_element;
		prev_element = element;
		element = next;
	}
	*begin_list = prev_element;
}
