/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <ecesari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 10:37:43 by ecesari           #+#    #+#             */
/*   Updated: 2018/01/11 20:15:14 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str_new;

	if (!(str_new = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_bzero(str_new, (size + 1));
	return (str_new);
}
