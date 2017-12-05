/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 14:52:04 by ecesari           #+#    #+#             */
/*   Updated: 2017/12/05 19:21:24 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**map(int n)
{
	char	**map;
	int 	x;
	int 	y;

	x = n + n;
	y = n;
	if (!(map[x] = (char *)malloc(sizeof(char) * x)))
		return (NULL);
	if (!(map[x][y] = (char *)malloc(sizeof(char) * y)))
		return (NULL);
	x = 0;
	y = 0;
	while (x < 2n)
	{
		while (y < n)
		{
			map[x][y] = '.';
			y++;
		}
		while (x % (x + 1) == 0)
		{
			map[x] = '\0';
			x++;
		}
	}
	return (map);
}

int	main(void)
{
	int n;

	n = 2;
	printf("%c", *map(n));
	return (0);
}
