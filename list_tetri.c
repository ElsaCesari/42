/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_tetri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 14:16:48 by ecesari           #+#    #+#             */
/*   Updated: 2017/12/07 14:58:16 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
//cherche a creer la liste list contenant les tetri
t_tetri	*ft_listnew(int x[4], int y[4], char c)
{
	t_tetri	*list;
	int		i;

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
//cherche a afficher la liste
void	only_displaying(t_tetri *list)//to be erased
{
	t_tetri	*to_display;
	int		i;
	int		j;

	i = 0;
	j = 1;
	to_display = list;
	while (to_display)
	{
		printf("\n	Tetriminos n*%d", j);
		printf(" (lettre : %c) \n", to_display->c);
		while (i < 4)
		{
			printf("# n*%d est a x : %d et a y : %d \n", i,
					to_display->x[i], to_display->y[i]);
			i++;
		}
		i = 0;
		j++;
		to_display = to_display->next;
	}
}
