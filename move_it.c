/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_it.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschukin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 14:43:56 by aschukin          #+#    #+#             */
/*   Updated: 2017/12/07 12:06:23 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	move_up(t_tetri *link)
{
	int i;
	int min_y;

	i = 0;
	min_y = link->y[0]; //pourquoi pas mettre link->y[i]
	printf("link->y[0] avant le move_up : %d \n", link->y[0]);
	printf("link->y[1] avant le move_up : %d \n", link->y[1]);
	printf("link->y[2] avant le move_up : %d \n", link->y[2]);
	printf("link->y[3] avant le move_up : %d \n", link->y[3]);
	while (i < 4)
	{
		if (min_y > link->y[i])
		{
			printf("ok a \n");
			min_y = link->y[i];
		}
		i++;
	}
	printf("\n");
	i = 0;
	while (i < 4)
	{
		link->y[i] -= min_y;
		i++;
	}
	printf("link->y[0] apres le move_up : %d \n", link->y[0]);
	printf("link->y[1] apres le move_up : %d \n", link->y[1]);
	printf("link->y[2] apres le move_up : %d \n", link->y[2]);
	printf("link->y[3] apres le move_up : %d \n", link->y[3]);
}

static void	move_left(t_tetri *link)
{
	int i;
	int min_x;

	i = 0;
	min_x = link->x[0]; //pourquoi pas mettre link->x[i]
	printf("\n");
	printf("link->x[0] avant le move_left : %d \n", link->x[0]);
	printf("link->x[1] avant le move_left : %d \n", link->x[1]);
	printf("link->x[2] avant le move_left : %d \n", link->x[2]);
	printf("link->x[3] avant le move_left : %d \n", link->x[3]);
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
	printf("\n");
	printf("link->x[0] apres le move_left : %d \n", link->x[0]);
	printf("link->x[1] apres le move_left : %d \n", link->x[1]);
	printf("link->x[2] apres le move_left : %d \n", link->x[2]);
	printf("link->x[3] apres le move_left : %d \n", link->x[3]);
}

void		move_it(t_tetri *link)
{
	move_up(link);
	move_left(link);
}
