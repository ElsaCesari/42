/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 15:58:13 by ecesari           #+#    #+#             */
/*   Updated: 2017/11/17 12:58:24 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int index_src;
	int index_dst;

	index_src = 0;
	index_dst = 0;
	while (((char *)src)[index_src])
	{
		dst[index_dst] = ((char *)src)[index_src];
		index_src++;
		index_dst++;
	}
	dst[index_dst] = '\0';
	return (dst);
}
