/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 18:48:08 by ecesari           #+#    #+#             */
/*   Updated: 2017/11/17 20:32:52 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned long	x;

	x = 0;
	while (x < n)
	{
		((char *)dst)[x] = ((char *)src)[x];
		if (((unsigned char *)src)[x] == (unsigned char)c)
			return (&dst[x + 1]);
		x++;
	}
	return (NULL);
}
