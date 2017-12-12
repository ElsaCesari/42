/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 16:51:43 by ecesari           #+#    #+#             */
/*   Updated: 2017/12/12 18:57:34 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		place_is_free(char **map, t_tetri *link, int j, int i)
{
	int	k;

	k = 0;
	while (k < 4)
	{
		if (!(map[j + link->y[k]]))
			return (0);
		if (!(map[j + link->y[k]][i + link->x[k]]))
			return (0);
		if (map[j + link->y[k]][i + link->x[k]] != '.')
			return (0);
		k++;
	}
	return (1);
}

void	ft_put(char **map, t_tetri *link, int j, int i)
{
	int	k;

	k = 0;
	while (k < 4)
	{
		if (map[j + link->y[k]][i + link->x[k]] == '.')
			map[j + link->y[k]][i + link->x[k]] = link->c;
		else
			map[j + link->y[k]][i + link->x[k]] = '.';
		k++;
	}
}

int		placing(char **map, t_tetri *link)
{
	int		i;
	int		j;

	j = 0;
	while (map[j])
	{
		i = 0;
		while (map[j][i])
		{
			if (place_is_free(map, link, j, i) == 1)
			{
				ft_put(map, link, j, i);
				if (link->next == NULL)
					return (ft_print_map(map));
				if (placing(map, link->next) == 1)
					return (1);
				else
					ft_put(map, link, j, i);
			}
			i++;
		}
		j++;
	}
	return (0);
}

char	**map_size_up(char **map, t_tetri *link)
{
	int	size;

	size = smallest_square(link);
	while (placing(map, link) == 0)
	{
		ft_delete_map((char **)map);
		map = create_map(size++);
	}
	return (map);
}
