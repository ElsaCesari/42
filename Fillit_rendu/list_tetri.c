/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_tetri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 14:16:48 by ecesari           #+#    #+#             */
/*   Updated: 2017/12/12 20:02:04 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetri	*ft_lnew(void)
{
	t_tetri		*list;
	static char	c = 'A';

	if (!(list = (t_tetri*)malloc(sizeof(t_tetri))))
		return (NULL);
	list->c = c++;
	list->next = NULL;
	return (list);
}

t_tetri	*ft_lst_add(t_tetri **start_list)
{
	t_tetri	*tmp;

	if (*start_list == NULL)
	{
		*start_list = ft_lnew();
		return (*start_list);
	}
	else
	{
		tmp = *start_list;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = ft_lnew();
		return (tmp->next);
	}
}

int		ft_lstcount(t_tetri *list)
{
	int		i;

	i = 0;
	while (list)
	{
		i++;
		list = list->next;
	}
	return (i);
}

void	ft_delete_list(t_tetri *list)
{
	t_tetri	*tmp;

	if (list)
	{
		tmp = list->next;
		free(list);
		ft_delete_list(tmp);
	}
	else
		free(list);
}
