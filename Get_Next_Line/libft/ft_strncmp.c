/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 16:18:48 by ecesari           #+#    #+#             */
/*   Updated: 2017/11/22 17:35:59 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int x;

	x = 0;
	if (n == 0)
		return (0);
	while (s1[x] && s2[x] && s1[x] == s2[x] && x < n - 1)
		x++;
	return (((unsigned char *)s1)[x] - ((unsigned char *)s2)[x]);
}
