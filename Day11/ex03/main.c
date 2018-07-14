/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 19:36:06 by mcols             #+#    #+#             */
/*   Updated: 2018/07/03 19:36:08 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

int		ft_list_size(t_list *begin_list);

int		main(void)
{
	t_list		*begin_list;

	begin_list = 0;
	printf("%d", ft_list_size(begin_list));
	return (0);
}
