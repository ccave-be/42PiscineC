/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcols <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 11:20:22 by mcols             #+#    #+#             */
/*   Updated: 2018/06/24 11:20:24 by mcols            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_max_width_stage(int stage)
{
	if (stage > 1 && stage % 2 != 1)
		return ((2 * (stage + 1)) + stage + 4 + ft_max_width_stage(stage - 1));
	else if (stage > 1)
		return ((2 * (stage + 1)) + stage + 3 + ft_max_width_stage(stage - 1));
	return (7);
}

int		ft_width_first_line(int stage)
{
	int		max_width_stage;

	max_width_stage = (stage > 1) ? ft_max_width_stage(stage - 1) : 0;
	if (stage % 2 != 1 && stage > 1)
		return (stage + 4 + max_width_stage);
	else if (stage > 1)
		return (stage + 3 + max_width_stage);
	else
		return (3);
}

void	ft_print_row(int space, int width)
{
	int		width_temp;

	width_temp = width;
	while (space + width > 0)
	{
		if (space > 0)
		{
			ft_putchar(' ');
			space--;
		}
		else if (width == width_temp || width == 1)
		{
			ft_putchar((width == width_temp) ? '/' : '\\');
			if (width == 1)
				ft_putchar('\n');
			width--;
		}
		else
		{
			ft_putchar('*');
			width--;
		}
	}
}

void	ft_print_stage(int stage, int max_stage, int width_first_line)
{
	int		rows;
	int		max_width_stage;
	int		increase;
	int		spaces;
	int		spaces_line;

	rows = stage + 2;
	increase = 0;
	spaces = 0;
	max_width_stage = ft_max_width_stage(max_stage);
	while (rows > 0)
	{
		spaces_line = ((max_width_stage / 2) - (width_first_line / 2)) - spaces;
		ft_print_row(spaces_line, width_first_line + increase);
		increase += 2;
		spaces++;
		rows--;
	}
}

void	sastantua(int stage)
{
	int		i;
	int		width_first_line;

	i = 1;
	while (i <= stage)
	{
		width_first_line = ft_width_first_line(i);
		ft_print_stage(i, stage, width_first_line);
		i++;
	}
}
