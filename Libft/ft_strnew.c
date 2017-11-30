/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 10:37:43 by ecesari           #+#    #+#             */
/*   Updated: 2017/11/21 12:38:35 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str_new;

	if (!(str_new = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_bzero(str_new, (size));
	while (str_new[size])
	{
		str_new[size] = '\0';
		size--;
	}
	return (str_new);
}
