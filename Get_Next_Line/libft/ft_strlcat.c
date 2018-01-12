/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 18:05:04 by ecesari           #+#    #+#             */
/*   Updated: 2017/11/22 20:03:10 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	x;
	size_t	len_dst;
	size_t	len_src;

	i = 0;
	x = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size <= len_dst)
		return (len_src + size);
	while (dst[i] && i < size)
		i++;
	while (src[x] && i + x < size - 1)
	{
		dst[i + x] = src[x];
		x++;
	}
	if (i + x < size)
		dst[i + x] = '\0';
	return (len_dst + len_src);
}
