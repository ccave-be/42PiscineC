/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 20:47:33 by mcols             #+#    #+#             */
/*   Updated: 2018/07/03 20:47:35 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list		*ft_list_push_params(int ac, char **av);

t_list		*ft_create_elem(void *data)
{
	t_list		*elem;

	elem = (t_list *)malloc(sizeof(t_list));
	if (elem)
	{
		elem->data = data;
		elem->next = NULL;
	}
	return (elem);
}

void		ft_show_list(t_list *std)
{
	t_list	*elem;

	elem = std;
	while (elem)
	{
		printf("%s", elem->data);
		elem = elem->next;
	}
}

int		main(void)
{
	char	**argv;

	argv = (char **)malloc(sizeof(char *) * 4);
	argv[0] = "a";
	argv[1] = "b";
	argv[2] = "c";
	ft_show_list(ft_list_push_params(3, (char **)argv));

}
