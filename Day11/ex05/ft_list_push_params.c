/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 20:08:09 by mcols             #+#    #+#             */
/*   Updated: 2018/07/03 20:08:10 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*elem;

	list = ft_create_elem(av[--ac]);
	elem = list;
	while (--ac >= 0)
	{
		elem->next = ft_create_elem(av[ac]);
		elem = elem->next;
	}
	return (list);
}
