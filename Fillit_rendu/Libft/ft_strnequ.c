/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 14:15:20 by ecesari           #+#    #+#             */
/*   Updated: 2017/11/23 12:12:26 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	x;

	x = 0;
	if (s1 && s2)
	{
		while ((s1[x] != '\0' || s2[x] != '\0') && x < n)
		{
			if (s1[x] != s2[x])
				return (0);
			x++;
		}
		return (1);
	}
	return (0);
}
