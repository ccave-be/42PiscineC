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

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *));

t_btree	*btree_create_node(void *item);

void	ft_display_node(t_btree *tree)
{
	printf("%d", *(int *)tree->item);
}

void	ft_change_name(void	*data)
{
	int		i;
	i = 80;

	*(int *)data = i;
}

int		main(void)
{
	t_btree		*tree;
	void		*hi;
	int			i;

	i = 9;
	hi = &i;
	tree = btree_create_node(hi);
	tree->left = btree_create_node(hi);
	tree->right = btree_create_node(hi);
	btree_apply_prefix(tree, &ft_change_name);
	ft_display_node(tree);
	ft_display_node(tree->left);
	ft_display_node(tree->right);
	return (0);
}
