/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 15:00:29 by ecesari           #+#    #+#             */
/*   Updated: 2017/11/21 18:08:28 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str_new;
	unsigned int	x;

	x = 0;
	if (!s)
		return (0);
	if (!(str_new = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (((char *)s)[start] && x < len)
	{
		str_new[x] = ((char *)s)[start];
		start++;
		x++;
	}
	str_new[x] = '\0';
	return (str_new);
}
