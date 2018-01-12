/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 15:41:55 by ecesari           #+#    #+#             */
/*   Updated: 2017/11/22 10:30:32 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int x;

	x = 0;
	while (x < n)
	{
		if (((unsigned char *)s)[x] == (unsigned char)c)
			return (&((void *)s)[x]);
		x++;
	}
	return (NULL);
}
