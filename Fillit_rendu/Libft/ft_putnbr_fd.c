/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 18:55:15 by ecesari           #+#    #+#             */
/*   Updated: 2017/11/24 11:15:24 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		if (nb == -2147483648)
		{
			nb++;
			ft_putnbr_fd(-nb / 10, fd);
			ft_putchar_fd('8', fd);
		}
		else if (nb <= -10)
		{
			ft_putnbr_fd(-nb / 10, fd);
			ft_putchar_fd(-nb % 10 + '0', fd);
		}
		else
			ft_putchar_fd(-nb % 10 + '0', fd);
	}
	else if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putchar_fd(nb % 10 + '0', fd);
	}
	else
		ft_putchar_fd(nb + '0', fd);
}
