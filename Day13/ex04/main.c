/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 11:59:34 by mcols             #+#    #+#             */
/*   Updated: 2018/07/06 11:59:36 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>

void	btree_insert_data(t_btree **root, void *item,
							int (*cmpf)(void *, void *));

t_btree	*btree_create_node(void *item);

void	ft_display_tree(t_btree *tree)
{
	if (tree->left)
		ft_display_tree(tree->left);
	printf("  %d  ", *(int *)tree->item);
	if (tree->right)
		ft_display_tree(tree->right);
}

void	ft_change_name(void	*data)
{
	int		i;
	i = 80;

	*(int *)data = i;
}

int		ft_cmpf(void *i, void *j)
{
	if (i != j)
		return (i - j);
	return (0);
}

int		main(void)
{
	t_btree		*tree;
	void		*hi;
	int			i;

	i = 9;
	hi = &i;
	tree = btree_create_node(hi);
	tree->right = btree_create_node(hi);
	(tree->right)->right = btree_create_node(hi);
	btree_insert_data(&tree, hi, &ft_cmpf);
	ft_display_tree(tree);
	return (0);
}
