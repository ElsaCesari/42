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
		printf("\n	Tetriminos n*%d (lettre : %c) \n", j, to_display->c);
        
        // Iterate through each tile in the 4x4 grid, using i & j as
        // indices
        i = 0;
		while (i < 4)
		{
            j = 0;
            while (j < 4)
            {
                // `k` iterates through blocks in a tetrimino.
                // We check the grid (using x & y) to see if there's a block at that coordinate
                int k;
                int has_block;
                k = 0;
                has_block = 0;
                
                while (k < 4)
                {
                    if (to_display->x[k] == j && to_display->y[k] == i)
                    {
                        has_block = 1;
                        break;
                    }
                    k++;
                }
                
                if (has_block == 1)
                {
                    printf("%c", to_display->c);
                }
                else
                {
                    printf(".");
                }
                
                j++;
            }
			i++;
            printf("\n");
		}
		i = 0;
		j++;
		to_display = to_display->next;
	}
}

int	ft_lstcount(t_tetri *list)
{
	int		i;
	t_tetri	*temp;

	i = 0;
	temp = list;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
