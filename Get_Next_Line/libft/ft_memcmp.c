/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 16:51:30 by ecesari           #+#    #+#             */
/*   Updated: 2017/11/21 14:29:11 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char *p1;
	char *p2;

	p1 = (char *)s1;
	p2 = (char *)s2;
	while (n--)
	{
		if (*p1 != *p2)
			return ((unsigned char)*p1 - (unsigned char)*p2);
		else
		{
			p1++;
			p2++;
		}
	}
	return (0);
}
