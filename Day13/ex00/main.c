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

t_btree		*btree_create_node(void *item);

void	ft_display_node(t_btree *tree)
{
	printf("%s", tree->item);
}

int		main(void)
{
	ft_display_node(btree_create_node("HELLOOOO"));
	return (0);
}
