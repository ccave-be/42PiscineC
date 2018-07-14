/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 14:25:34 by mcols             #+#    #+#             */
/*   Updated: 2018/07/06 14:25:36 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
							int (*cmpf)(void *, void *))
{
	if (*root)
		if (cmpf(item, (*root)->item) < 0)
			btree_insert_data(&(*root)->left, item, cmpf);
		else
			btree_insert_data(&(*root)->right, item, cmpf);
	else
		*root = btree_create_node(item);
}
