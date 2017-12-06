/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snippy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 17:34:06 by ecesari           #+#    #+#             */
/*   Updated: 2017/12/06 15:47:55 by aschukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetri	*snippy(char *str, t_list **lst)
{
	int		x;
	int		hash;
	t_tetri	*link;
	int		letter;

	x = 0;
	hash = 0;
	letter = 0;
	if (!(link = (t_tetri*)malloc(sizeof(t_tetri))))
		return (0);
	while (str[x])
	{
		if (hash < 4 && str[x] == '#')
		{
			link->x[hash] = (x - letter) % 5;
			link->y[hash] = (x - letter * 21) / 5;
			hash++;
		}
		if (hash == 4)
		{
			link->c = letter + 65;
			ft_push_back(lst, ft_lstnew(&link, sizeof(link)));
			hash = 0;
			letter++;
		}
		x++;
	}
	return (link);
}
