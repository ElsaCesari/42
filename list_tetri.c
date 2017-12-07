/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 18:59:46 by ecesari           #+#    #+#             */
/*   Updated: 2017/12/07 12:30:11 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

//cherche a creer la liste list contenant les tetri
t_tetri	*ft_listnew(int x[4], int y[4], char c)
{
	t_tetri	*list;
	int 	i;

	i = 0;
	if (!(list = (t_tetri*)malloc(sizeof(t_tetri))))
		return (NULL);
	while (i < 4)
	{
		list->x[i] = x[i];
		list->y[i] = y[i];
		i++;
	}
	list->c = c;
	list->next = NULL;
	return (list);
}

/*/ cherche a mettre a la fin de begin list l'element *list
void	ft_push_back(t_tetri **begin_list, t_tetri *list)
{
	t_tetri *tmp;

	if (!(*begin_list))
		*begin_list = list;
	else
	{
		tmp = begin_list;
		while (tmp->next != NULL)
			tmp = tmp->next;
		list = tmp->next;
	}
}*/

//cherche a imprimer la liste
void	only_displaying(t_tetri *list) //to be erased
{
	t_tetri	*to_display;
	int		i;

	i = 0;
	to_display = list;
	while (to_display)
	{
		while (i < 4)
		{
			printf("%d \n", to_display->x[i]);
			printf("%d \n", to_display->y[i]);
			i++;
		}
		printf("%c \n", to_display->c);
		i = 0;
		to_display = to_display->next;
	}
}
