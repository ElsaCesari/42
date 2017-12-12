/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 18:33:54 by ecesari           #+#    #+#             */
/*   Updated: 2017/11/17 18:44:37 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned long	x;
	char			*dst_bis;
	char			*src_bis;

	x = 0;
	dst_bis = dst;
	src_bis = (char *)src;
	while (x < n)
	{
		dst_bis[x] = src_bis[x];
		x++;
	}
	return (dst_bis);
}
