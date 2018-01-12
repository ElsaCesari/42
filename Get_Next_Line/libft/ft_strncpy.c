/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:35:39 by ecesari           #+#    #+#             */
/*   Updated: 2017/11/27 15:33:52 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	size_t x;

	x = 0;
	while (src[x] && x < len)
	{
		dest[x] = src[x];
		x++;
	}
	while (x < len)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
