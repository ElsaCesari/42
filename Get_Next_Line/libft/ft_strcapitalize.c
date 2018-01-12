/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 20:45:49 by ecesari           #+#    #+#             */
/*   Updated: 2017/11/24 20:46:14 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcapitalize(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
			str[index] = str[index] + 32;
		index++;
	}
	index = 0;
	while (str[index] != '\0')
	{
		if ((str[index] >= 'a') && (str[index] <= 'z') &&
				((str[index - 1] < 'a') || (str[index - 1] > 'z')) &&
				((str[index - 1] < 'A') || (str[index - 1] > 'Z')) &&
				((str[index - 1] < '0') || (str[index - 1] > '9')))
			str[index] = str[index] - 32;
		index++;
	}
	return (str);
}
