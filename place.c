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

int	place_is_free(char **map, t_tetri *link, int j, int i)
{
	if (map[j][i] == '.' && map[j + link->y[1]][i + link->x[1]] == '.'
		&& map[j + link->y[2]][i + link->x[2]] == '.'
		&& map[j + link->y[3]][i + link->x[3]] == '.')
		return (1);
	return (0);
}

int	placing(char **map, t_tetri *link)
{
	int		i;
	int		j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (place_is_free(map, link, i, j) == 1)
			{
				ft_put(map, link, i, j);
				ft_print_map(map);
				if (link->next == NULL)
					return (1);
				if (placing(map, link->next) == 1)
					return (1);
				else
					ft_put(map, link, i, j);
			}
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_put(char **map, t_tetri *link, int i, int j)
{
	int	k;

	k = 0;
	while (k < 4)
	{
		if (map[i + link->y[k]][j + link->x[k]] == '.')
			map[i + link->y[k]][j + link->x[k]] = link->c;
		else
			map[i + link->y[k]][j + link->x[k]] = '.';	
		k++;
	}
}

