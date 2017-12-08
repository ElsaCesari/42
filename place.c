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
	int lenght_map;

	i = 0;
	j = 0;
	lenght_map = ft_strlen(map[0]);
	while (map[j])
	{
		while (map[j][i])
		{
			if (map[j][i] == '.' && map[j + link->y[1]][i + link->x[1]] == '.'
		 		&& map[j + link->y[2]][i + link->x[2]] == '.'
		 		&& map[j + link->y[3]][i +link->x[3]] == '.')
			{
				placing(i, j, map, *link);
				return (1);
			}
			i++;
		}
		i = 0;
		j++;
		//link = link->next;
	}
	ft_print_map(map);
	return (0);
}

char	**placing(int i, int j, char **map, t_tetri link)
{
	t_tetri	*to_display;
	int		k;
	int		size_list;
	int		z;
	
	k = 0;
	z = 0;
	size_list = ft_lstcount(&link);
	to_display = &link;
	while (to_display)
	{
<<<<<<< Updated upstream
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
=======
		while (k < 4 && z < size_list)
		{
			map[j + to_display->y[k]][i + to_display->x[k]] = to_display->c;
			map[j + to_display->y[k]][i + to_display->x[k]] = to_display->c;
			map[j + to_display->y[k]][i + to_display->x[k]] = to_display->c;
			map[j + to_display->y[k]][i + to_display->x[k]] = to_display->c;
			k++;
		}
		k = 0;
		z++;
		to_display = to_display->next;
		try_placing(map, to_display);
>>>>>>> Stashed changes
	}
	
	return (map);
}

<<<<<<< Updated upstream

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
=======
/*char	**ft_fillit_solve(char **map, t_tetri *link)
{
	t_tetri	tmp;

	tmp = link
	if (tmp == NULL)
		return (map);
	while (link)
	{
			

	}


}*/
>>>>>>> Stashed changes
