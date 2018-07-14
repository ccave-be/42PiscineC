/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 11:50:37 by mcols             #+#    #+#             */
/*   Updated: 2018/07/06 11:50:38 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree		*btree;

	btree = (t_btree *)malloc(sizeof(t_btree));
	if (btree)
	{
		btree->item = item;
		btree->left = 0;
		btree->right = 0;
	}
	return (btree);
}
