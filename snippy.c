/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snippy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 17:34:06 by ecesari           #+#    #+#             */
/*   Updated: 2017/12/07 12:47:06 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetri	*snippy_first_tetri(char *str)
{
	int		x[4];
	int 	y[4];
	int		hash;
	t_tetri	*begin_list;
	int 	i;
	char 	letter;

	hash = 0;
	begin_list = NULL;
	i = 0;
	while (i < 21)
	{
		if (hash < 4 && str[i] == '#')
		{
			x[hash] = i % 5;
			y[hash] = i / 5;
			hash++;
		}
		if (hash == 4)
		{
			letter  = 'A';
			begin_list = ft_listnew(x, y, letter);
			hash = 0;
		}
		i++;
	}
	return (begin_list);
}

t_tetri	*snippy_rest(char *str)
{
	int		x[4];
	int 	y[4];
	int		hash;
	t_tetri	*link;
	t_tetri	*begin_list;
	char	letter;
	int		i;

	hash = 0;
	letter = 'B';
	i = 0;
	begin_list = snippy_first_tetri(str);
	link = begin_list;
	str = str + 21;
	while (str[i])
	{
		if (hash < 4 && str[i] == '#')
		{
			x[hash] = i % 5;
			y[hash] = i / 5;
			hash++;
		}
		if (hash == 4)
		{
			link->next = ft_listnew(x, y, letter);
			hash = 0;
			letter++;
			link = link->next;
		}
		i++;
		if (i == 20)
		{
			str = str + i + 1;
			i = 0;
		}
	}
	ft_display_the_result(begin_list);
	return (begin_list);
}

void	ft_display_the_result(t_tetri *list)
{
	t_tetri	*tmp;

	tmp = list;
	only_displaying(list);
	while (tmp)
	{
		move_it(tmp);
		tmp = tmp->next;
	}
	only_displaying(list);
}
