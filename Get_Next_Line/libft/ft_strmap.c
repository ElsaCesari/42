/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 11:44:26 by ecesari           #+#    #+#             */
/*   Updated: 2017/11/21 12:47:02 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		x;
	char	*str_new;

	x = 0;
	if (((char *)s))
	{
		if (!(str_new = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1
))))
			return (NULL);
		while (((char *)s)[x])
		{
			str_new[x] = (*f)(((char *)s)[x]);
			x++;
		}
		str_new[x] = '\0';
		return (str_new);
	}
	return (0);
}
