/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 17:56:40 by ecesari           #+#    #+#             */
/*   Updated: 2017/11/22 11:46:58 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		x;

	str = (char *)s;
	x = 0;
	while (str[x])
	{
		if (str[x] == (char)c)
			return (&((char *)str)[x]);
		x++;
	}
	if (str[x] == (char)c)
		return (&((char *)str)[x]);
	return (NULL);
}
