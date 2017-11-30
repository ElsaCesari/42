/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 17:25:07 by ecesari           #+#    #+#             */
/*   Updated: 2017/11/17 18:22:38 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned long	x;
	char			*bb;

	x = 0;
	bb = b;
	while (x < len)
	{
		bb[x] = (unsigned char)c;
		x++;
	}
	return (bb);
}
