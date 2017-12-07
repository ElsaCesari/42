/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_fillit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 14:45:21 by ecesari           #+#    #+#             */
/*   Updated: 2017/12/07 09:37:36 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char **argv)
{
	int		fd;

	if (argc != 2)
	{
		ft_putstr("usage: ./fillit Path/file");
		exit(-1);
	}
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			ft_putstr("error\n");
			exit(-1);
		}
		if (read_file(fd) == -1)
		{
			ft_putstr("error\n");
			exit(-1);
		}
		if (close(fd) == -1)
		{
			ft_putstr("error\n");
			exit(-1);
		}
	}
	return (0);
}
