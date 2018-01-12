/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 16:56:06 by ecesari           #+#    #+#             */
/*   Updated: 2017/11/22 18:01:24 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int x;
	int sign;
	int nb;

	x = 0;
	sign = 0;
	nb = 0;
	while (str[x] == ' ' || str[x] == '\t' || str[x] == '\v' || str[x] == '\n'
		|| str[x] == '\r' || str[x] == '\f')
		x++;
	if (str[x] == '-')
		sign = 1;
	if (str[x] == '+' || str[x] == '-')
		x++;
	while (str[x] >= '0' && str[x] <= '9')
	{
		nb = nb * 10 + (str[x] - '0');
		x++;
	}
	if (sign == 1)
		nb = -nb;
	return (nb);
}
