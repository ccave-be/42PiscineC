/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 19:11:36 by mcols             #+#    #+#             */
/*   Updated: 2018/07/03 19:11:37 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_list_push_back(t_list **begin_list, void *data);


void	ft_show_list(t_list *list)
{
	int		i;

	i = -1;
	while (list[++i] != '\0')
		printf("%s", (char *)list->data);
}
int		main(void)
{
	t_list	*begin_list = 0;

	ft_list_push_back(&begin_list, "asdf");
	ft_show_list(begin_list);
}
