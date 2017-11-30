/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 15:29:44 by ecesari           #+#    #+#             */
/*   Updated: 2017/11/23 16:02:16 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_new;
	size_t	len_s1;
	size_t	len_s2;
	size_t	x;

	x = 0;
	if (!s1 || !s2)
		return (0);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (!(str_new = (char *)malloc(sizeof(char) * (len_s1 + len_s2))))
		return (NULL);
	while (s1[x])
	{
		str_new[x] = s1[x];
		x++;
	}
	x = 0;
	while (s2[x])
	{
		str_new[len_s1 + x] = s2[x];
		x++;
	}
	str_new[len_s1 + len_s2] = '\0';
	return (str_new);
}
