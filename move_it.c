/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_it.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschukin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 14:43:56 by aschukin          #+#    #+#             */
/*   Updated: 2017/12/06 19:25:33 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	move_up(t_tetri *link)
{
	int i;
	int min_y;

	i = 0;
	min_y = link->y[0]; //pourquoi pas mettre link->y[i]
	printf("ok move_up \n");
	while (i < 4)
	{
		if (min_y > link->y[i])
		{
			printf("ok a \n");
			min_y = link->y[i];
		}
		i++;
	}
	printf("ok move_up \n");
	i = 0;
	while (i < 4)
	{
		printf("ok b \n");
		link->y[i] -= min_y;
		i++;
	}
	printf("ok move_up \n");
}

static void	move_left(t_tetri *link)
{
	int i;
	int min_x;

	i = 0;
	min_x = link->x[0]; //pourquoi pas mettre link->x[i]
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
