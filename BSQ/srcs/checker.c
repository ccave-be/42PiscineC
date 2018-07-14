/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otahirov <otahirov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 14:15:36 by mcols             #+#    #+#             */
/*   Updated: 2018/07/11 15:26:42 by otahirov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"
#include "../includes/bsq.h"

static	void	**ft_get_num(char *str, void **instructions, int *i, int fd)
{
	int		result;
	int		j;

	result = 0;
	j = 0;
	close(fd);
	if (i[0] - 3 > 8 || i[0] < 4 || FT_CHARS_EQ(instructions))
	{
		return (0);
	}
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			result = result * 10 + *str - '0';
			str++;
			j++;
		}
		else
			return (0);
	}
	instructions[0] = malloc(sizeof(int));
	*((int *)(instructions[0])) = result;
	return (instructions);
}

void			**get_instr(char *file_name)
{
	void	**instructions;
	char	*buf;
	char	c;
	int		fd;
	int		i[3];

	buf = (char *)malloc(sizeof(char) * 20);
	instructions = (void **)malloc(sizeof(void *) * 5);
	fd = (file_name) ? open(file_name, O_RDONLY) : 0;
	i[0] = -1;
	while (fd != -1 && read(fd, &c, 1) != -1 && ++i[0] < 19)
	{
		if (c == '\n')
			break ;
		buf[i[0]] = c;
	}
	i[1] = i[0] - 4;
	i[2] = 0;
	while (++i[1] <= i[0] && i[1] > 0)
	{
		instructions[++i[2]] = malloc(sizeof(char));
		INS(char, i[2]) = buf[i[1]];
		buf[i[1]] = '\0';
	}
	return (ft_get_num(buf, instructions, i, fd));
}

static	int		checker_first_line(int fd, void **instructions)
{
	char	c;
	int		line_length;
	int		lines;

	line_length = 0;
	lines = 0;
	c = '\0';
	while ((c != '\n' || lines == 1) && read(fd, &c, 1))
	{
		line_length = (lines == 0 && c == '\n') ? 0 : line_length + 1;
		lines += (c == '\n') ? 1 : 0;
		if (lines == 1 && c != INS(char, 1) && c != INS(char, 2)
			&& c != INS(char, 3) && c != '\n')
			return (0);
	}
	if (lines == 2)
	{
		instructions[4] = malloc(sizeof(int));
		INS(int, 4) = line_length;
		return (line_length);
	}
	return (0);
}

void			**checker(char *file_name, void **instructions)
{
	int		fd;
	int		i[3];
	char	*buf;

	fd = open(file_name, O_RDONLY);
	i[2] = (instructions == 0) ? 0 : checker_first_line(fd, instructions);
	buf = (char *)malloc(sizeof(char) * i[2]);
	i[1] = 2;
	while (read(fd, buf, i[2]) && i[2] != 0)
	{
		i[0] = -1;
		while (++i[0] < i[2])
			if (buf[i[0]] != INS(char, 1) && buf[i[0]] != INS(char, 2)
				&& buf[i[0]] != INS(char, 3) && buf[i[0]] != '\n')
				return (0);
		if (buf[i[2] - 1] != '\n')
			return (0);
		i[1] += 1;
	}
	close(fd);
	free(buf);
	if (i[2] != 0 && i[1] - 1 == *((int *)instructions[0]))
		return (instructions);
	return (0);
}
