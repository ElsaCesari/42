/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 14:52:04 by ecesari           #+#    #+#             */
/*   Updated: 2017/12/12 19:02:37 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*create_line(int n)
{
	char	*line;
	int		x;

	x = 0;
	if (!(line = (char*)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	while (x < n)
	{
		line[x] = '.';
		x++;
	}
	line[x] = '\0';
	return (line);
}

char	**create_map(int n)
{
	char	**map;
	int		y;

	map = NULL;
	y = 0;
	if (!(map = (char**)malloc(sizeof(char*) * (n + 1))))
		return (NULL);
	while (y < n)
	{
		map[y] = create_line(n);
		y++;
	}
	map[y] = NULL;
	return (map);
}

int		smallest_square(t_tetri *list)
{
	int n;
	int	nbr_tetri;

	n = 2;
	nbr_tetri = ft_lstcount(list);
	while (n * n < nbr_tetri * 4)
		n++;
	return (n);
}

void	ft_delete_map(char **map)
{
	int	y;

	y = 0;
	while (map[y])
	{
		free(map[y]);
		y++;
	}
	free(map);
}

int		ft_print_map(char **map)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (map[i])
	{
		while (map[i][j])
		{
			ft_putchar(map[i][j]);
			j++;
		}
		j = 0;
		ft_putchar('\n');
		i++;
	}
	return (1);
}
