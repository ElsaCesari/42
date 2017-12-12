/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_fillit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 14:45:21 by ecesari           #+#    #+#             */
/*   Updated: 2017/12/07 15:48:00 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char **argv)
{
	int		fd;

	if (argc != 2)
	{
		ft_putstr("usage: ./fillit Path/file_name");
		exit(-1);
	}
	else
	{
		if ((fd = open(argv[1], O_RDONLY)) == -1)
			ft_error();
		read_file(fd);
		if (close(fd) == -1)
			ft_error();
	}
	return (0);
}
