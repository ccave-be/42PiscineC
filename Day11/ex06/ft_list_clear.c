/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 21:18:21 by mcols             #+#    #+#             */
/*   Updated: 2018/07/03 21:18:22 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list		*temp;
	t_list		*next;

	if (*begin_list)
	{
		temp = *begin_list;
		next = temp;
		while (next)
		{
			next = temp->next;
			free(temp);
			temp = next;
		}
	}
	*begin_list = 0;
}
