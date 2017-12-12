/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 11:50:36 by ecesari           #+#    #+#             */
/*   Updated: 2017/11/22 12:26:02 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		x;

	str = (char *)s;
	x = ft_strlen(str);
	while (str[x] != str[0])
	{
		if (str[x] == (char)c)
			return (&((char *)str)[x]);
		x--;
	}
	if (str[x] == (char)c)
		return (&((char *)str)[x]);
	return (NULL);
}
