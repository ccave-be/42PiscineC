/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 13:21:41 by mcols             #+#    #+#             */
/*   Updated: 2018/07/03 13:21:42 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *c1, char *c2)
{
	int		i;

	i = -1;
	while (c1[++i] != '\0' || c2[i] != '\0')
		if (c1[i] != c2[i])
			return (c1[i] - c2[i]);
	return (0);
}

void	ft_sort_wordtab(char **tab)
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
			if (ft_strcmp(tab[j], tab[min]) < 0)
			{
				temp = tab[j];
				tab[j] = tab[min];
				tab[min] = temp;
			}
		}
	}
}
