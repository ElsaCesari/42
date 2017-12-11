/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cut.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 14:16:48 by ecesari           #+#    #+#             */
/*   Updated: 2017/12/07 14:58:16 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	split_buf(t_tetri **list, char *str)
{
	int		i;
	int		hash;
	t_tetri	*tmp;

	i = 0;
	while (str[i])
	{
		tmp = ft_lst_add(list);
		hash = 0;
		while (i < 20)
		{
			if (hash < 4 && str[i] == '#')
			{
				tmp->x[hash] = i % 5;
				tmp->y[hash] = i / 5;
				hash++;
			}
			i++;
		}
		if (str[i] == '\n')
			i++;
		str = str + i;
		i = 0;
	}
	ft_display_the_result(*list);
}

void	ft_display_the_result(t_tetri *list)
{
	t_tetri	*tmp;

	tmp = list;
	only_displaying(list);
	while (list)
	{
		move_it(list);
		list = list->next;
	}
	only_displaying(tmp);
}
