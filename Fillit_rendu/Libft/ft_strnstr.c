/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 17:41:17 by ecesari           #+#    #+#             */
/*   Updated: 2017/11/22 13:59:57 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	size_t	x;
	size_t	y;
	size_t	t;

	x = 0;
	y = 0;
	if (!needle[y])
		return ((char *)hay);
	while (((char *)hay)[x] && x < len)
	{
		t = x;
		while (((char *)hay)[t] == needle[y] && t < len)
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
