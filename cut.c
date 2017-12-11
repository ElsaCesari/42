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

/*t_tetri	*ft_test(char *str)
{
	int		hash;
	int		i;
	t_tetri	*start_list;

	hash = 0;
	i = 0;
	start_list = ft_lnew();
	while (i < 20)
	{
		if (hash < 4 && str[i] == '#')
		{
			start_list->x[hash] = i % 5;
			start_list->y[hash] = i / 5;
			hash++;
		}
		i++;
	}
	ft_test2(start_list, str);
	return (start_list);
}

t_tetri	*ft_test2(t_tetri *start_list, char *str)
{
	int		hash;
	int		i;
	t_tetri	*rest_list;

	hash = 0;
	i = 0;
	rest_list = ft_lst_add(start_list);
	str = str + 21;
	while (str[i])
	{
		if (hash < 4 && str[i] == '#')
		{
			rest_list->x[hash] = i % 5;
			rest_list->y[hash] = i / 5;
			hash++;
		}
		if (hash == 4 && str[21] !='\0')
		{
			rest_list->next = ft_lnew();
			hash = 0;
			rest_list = rest_list->next;
		}
		i++;
		if (i == 20)
		{
			str = str + i + 1;
			i = 0;
		}
	}
	ft_display_the_result(start_list);
	return (start_list);
}*/


t_tetri	*snippy_first_tetri(char *str)
{
	int		hash;
	int		i;
	t_tetri	*begin_list;

	hash = 0;
	i = 0;
	begin_list = ft_lnew();
	while (i < 20)
	{
		if (hash < 4 && str[i] == '#')
		{
			begin_list->x[hash] = i % 5;
			begin_list->y[hash] = i / 5;
			hash++;
		}
		i++;
	}
	return (begin_list);
}

t_tetri	*snippy_rest(char *str)
{
	int		hash;
	int		i;
	t_tetri	*link;
	t_tetri	*begin_list;

	hash = 0;
	i = 0;
	begin_list = snippy_first_tetri(str);
	link = ft_lnew();
	begin_list->next = link;
	str = str + 21;
	while (str[i])
	{
		if (hash < 4 && str[i] == '#')
		{
			link->x[hash] = i % 5;
			link->y[hash] = i / 5;
			hash++;
		}
		if (hash == 4 && str[20] !='\0')
		{
			link->next = ft_lnew();
			hash = 0;
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
