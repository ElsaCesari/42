/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 16:51:43 by ecesari           #+#    #+#             */
/*   Updated: 2017/12/07 19:48:14 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	try_placing(char **map, t_tetri *link)
{
	int x;
	int y;
	int	hash;

	x = 0;
	y = 0;
	hash = 0;
	while (map)
	{
		if (map[x][y] == '.' && map[link->x[hash + 1]][link->y[hash + 1]] == '.'
		 && map[link->x[hash + 2]][link->y[hash + 2]] == '.'
		 && map[link->x[hash + 3]][link->y[hash + 3]] == '.')
			placing(x, y, map, *link);
			return (1);
		x++;
		y++;
	}
	return (0);
}

char	**placing(int x, int y, char **map, t_tetri link)
{
	int hash;

	hash = 0;
	map[x][y] = link.c;	
	map[link.x[hash + 1]][link.y[hash + 1]] = link.c;
	map[link.x[hash + 2]][link.y[hash + 2]] = link.c;
	map[link.x[hash + 3]][link.y[hash + 3]] = link.c;
	ft_print_map(map);
	return (map);
}
