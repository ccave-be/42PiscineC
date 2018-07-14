/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 14:00:57 by mcols             #+#    #+#             */
/*   Updated: 2018/07/03 14:00:59 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	int		min;
	char	*temp;

	i = -1;
	while (tab[++i] != 0)
	{
		j = i;
		min = j;
		while (tab[++j] != 0)
		{
			if (cmp(tab[j], tab[min]) < 0)
			{
				temp = tab[j];
				tab[j] = tab[min];
				tab[min] = temp;
			}
		}
	}
}
