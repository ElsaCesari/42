/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_it.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschukin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 14:43:56 by aschukin          #+#    #+#             */
/*   Updated: 2017/12/07 14:45:21 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	move_up(t_tetri *link)
{
	int i;
	int min_y;

	i = 0;
	min_y = link->y[0];
	while (i < 4)
	{
		if (min_y > link->y[i])
		{
			min_y = link->y[i];
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		link->y[i] -= min_y;
		i++;
	}
}

static void	move_left(t_tetri *link)
{
	int i;
	int min_x;

	i = 0;
	min_x = link->x[0];
	while (i < 4)
	{
		if (min_x > link->x[i])
		{
			min_x = link->x[i];
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		link->x[i] -= min_x;
		i++;
	}
}

void		move_it(t_tetri *link)
{
	move_up(link);
	move_left(link);
}
