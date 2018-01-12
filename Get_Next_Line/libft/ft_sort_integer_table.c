/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 20:38:59 by ecesari           #+#    #+#             */
/*   Updated: 2017/11/24 20:39:27 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sort_integer_table(int *tab, int size)
{
	int swap;
	int x;
	int boucle;

	boucle = 1;
	while (boucle == 1)
	{
		boucle = 0;
		x = 0;
		while (x + 1 != size)
		{
			if (tab[x] > tab[x + 1])
			{
				swap = tab[x];
				tab[x] = tab[x + 1];
				tab[x + 1] = swap;
				boucle = 1;
			}
			x++;
		}
	}
}
