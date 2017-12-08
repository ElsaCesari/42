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
	int i;
	int j;

	i = 0;
	j = 0;
	while (map)
	{
		if (map[i][j] == '.' && map[link->x[1]][link->y[1]] == '.'
		 && map[link->x[2]][link->y[2]] == '.'
		 && map[link->x[3]][link->y[3]] == '.')
			placing(i, j, map, *link);
			printf("b");
			return (1);
		i++;
		j++;
		link = link->next;
	}
	return (0);
}

char	**placing(int i, int j, char **map, t_tetri link)
{
	/*map[i][j] = link.c;	
	map[link.x[1]][link.y[1]] = link.c;
	map[link.x[2]][link.y[2]] = link.c;
	map[link.x[3]][link.y[3]] = link.c;
*/
	int hash;

	hash = 0;
	while (map[i])
	{
		while (hash < 3)
		{
			i = link.x[hash];
			j = link.y[hash];
			map[i][j] = link.c;
			printf("a");
			i++;
			j++;
			hash++;
		}
	}
	ft_print_map(map);
	return (map);
}


/* replaces tetri letters with dots */

char	**delete(char **map, t_tetri link)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (map[i] != NULL)
	{
		while(map[i][j] != '\0')
		{
			if (map[i][j] == link.c) // could use is_alpha here?
				tab[i][j] = '.';
			j++;
		}
		j = 0;
		i++;
	}
	return (map)
}