/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 16:41:20 by ecesari           #+#    #+#             */
/*   Updated: 2017/11/17 11:17:54 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *hay, const char *needle)
{
	int x;
	int y;
	int t;

	x = 0;
	y = 0;
	if (needle[y] == '\0')
		return ((char *)hay);
	while (hay[x] && needle[y])
	{
		t = x;
		while (hay[t] == needle[y])
		{
			t++;
			y++;
			if (needle[y] == '\0')
				return ((char *)&hay[x]);
		}
		y = 0;
		x++;
	}
	return (0);
}
