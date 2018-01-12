/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 18:39:42 by ecesari           #+#    #+#             */
/*   Updated: 2017/11/24 11:14:39 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			nb++;
			ft_putnbr(-nb / 10);
			ft_putchar('8');
		}
		else if (nb <= -10)
		{
			ft_putnbr(-nb / 10);
			ft_putchar(-nb % 10 + '0');
		}
		else
			ft_putchar(-nb % 10 + '0');
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else
		ft_putchar(nb + '0');
}
