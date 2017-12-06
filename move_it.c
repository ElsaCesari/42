/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_it.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschukin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 14:43:56 by aschukin          #+#    #+#             */
/*   Updated: 2017/12/06 15:43:17 by aschukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	move_up(char *str, t_tetri *link)
{
	int i;
	int hash;

	i = 0;
	hash = 0;
	while (str[i])
	{
		while (link->y[hash] != 0 && hash < 4)
			hash++;
		if (hash == 4)
		{
			hash = 0;
			while (hash < 4)
			{
				link->y[hash] = link->y[hash] - 1;
				hash++;
			}
		}
	}
}


static void	move_left(char *str, t_tetri *link)
{
	int i;
	int hash;

	i = 0;
	hash = 0;
	while (str[i])
	{
		while (link->x[hash] != 0 && hash < 4)
			hash ++;
		if (hash == 4)
		{
			hash = 0;
			while (hash < 4)
			{
				link->x[hash] = link->x[hash] - 1;
				hash++;
			}
		}
	}
}

void		move_it(char *str, t_tetri *link)
{
	move_up(str, link);
	move_left(str, link);
}
