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

//cherche a creer un maillon
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

//ajouter un maillon a la fin de la chaine
t_tetri *ft_lst_add(t_tetri **start_list)
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

//compter le nombre de maillons
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

//cherche a afficher la liste
void	only_displaying(t_tetri *list)//to be erased
{
	int		i;
	int		j;
	int 	k;
	t_tetri	*to_display;

	i = 0;
	j = 1;
	to_display = list;
	while (to_display)
	{
		printf("	Tetriminos lettre : %c\n", to_display->c);
        i = 0;
		k = 0;
		while (i < 4)
		{
            j = 0;
            while (j < 4)
            {
               	if (to_display->x[k] == j && to_display->y[k] == i)
				{
					printf("%c", to_display->c);
					k++;
				}
				else
					printf(".");
                j++;
            }
			i++;
            printf("\n");
		}
        printf("\n");
		to_display = to_display->next;
	}
}
