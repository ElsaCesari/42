/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 11:54:29 by ecesari           #+#    #+#             */
/*   Updated: 2017/12/07 19:45:45 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	read_file(int fd)
{
	int		ret;
	char	buf[BUF_SIZE];
	t_tetri	*list;
	char	**map;
	int		map_size;

	list = NULL;
	if (fd == -1)
		ft_error();
	ret = read(fd, buf, BUF_SIZE + 1);
	buf[ret] = '\0';
	if (ret == 0)
		ft_error();
	if (check_char(buf) == 0 || check_shape(buf) == 0)
		ft_error();
	split_buf(&list, buf);
	map_size = smallest_square(list);
	map = create_map(map_size);
	map_size_up(map, list);
	return (0);
}

int	check_char(char *str)
{
	int x;
	int hash;

	x = 0;
	while (str[x])
	{
		x = 0;
		hash = 0;
		while (x < 20)
		{
			if ((!str[x]) || (str[x] == '\n' && x % 5 != 4))
				return (0);
			else if (str[x] == '#')
				hash++;
			else if ((str[x] != '.' && x % 5 != 4)
					|| (x % 5 == 4 && str[x] != '\n'))
				return (0);
			x++;
		}
		if ((str[x] && str[x] != '\n') || hash != 4)
			return (0);
		str = str[21] != '\0' ? str + 21 : str - 8;
	}
	return (1);
}

int	check_shape(char *str)
{
	int	x;
	int cont;
	int line;

	x = 0;
	while (str[x])
	{
		cont = 0;
		line = 0;
		while (line < 5 && str[x])
		{
			if (str[x] == '#')
			{
				cont = (str[x + 1] == '#') ? ++cont : cont;
				cont = (str[x - 1] == '#' && x != 0) ? ++cont : cont;
				cont = (str[x + 5] == '#' && line < 3) ? ++cont : cont;
				cont = (str[x - 5] == '#' && line != 0) ? ++cont : cont;
			}
			line = (str[x] == '\n') ? ++line : line;
			x++;
		}
		if (cont != 6 && cont != 8)
			return (0);
	}
	return (1);
}
