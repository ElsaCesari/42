/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 13:43:58 by ecesari           #+#    #+#             */
/*   Updated: 2017/11/22 17:46:29 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	x;

	x = 0;
	if (dst < src)
	{
		while (x < len)
		{
			((char *)dst)[x] = ((char *)src)[x];
			x++;
		}
	}
	else
	{
		while (len--)
		{
			((char *)dst)[len] = ((char *)src)[len];
		}
	}
	return (dst);
}
