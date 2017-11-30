/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 14:58:25 by ecesari           #+#    #+#             */
/*   Updated: 2017/11/24 14:58:54 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int swap;
	int i;
	int a;

	i = 0;
	while (str[i])
		i++;
	i--;
	a = 0;
	while (i > a)
	{
		swap = str[a];
		str[a] = str[i];
		str[i] = swap;
		a++;
		i--;
	}
	return (str);
}
