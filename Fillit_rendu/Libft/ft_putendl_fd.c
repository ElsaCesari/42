/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 18:30:09 by ecesari           #+#    #+#             */
/*   Updated: 2017/11/24 11:33:03 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	int x;

	x = 0;
	if (!s)
		return ;
	while (((char *)s)[x])
	{
		write(fd, &((char *)s)[x], 1);
		x++;
	}
	write(fd, "\n", 1);
}
