/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_fillit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 14:45:21 by ecesari           #+#    #+#             */
/*   Updated: 2017/11/30 13:19:00 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char **argv)
{
	int		fd;

	if (argc != 2)
	{
		ft_putstr("usage: fillit Path/file");
		exit;
	}
	else
	{
		fd = open(argv[1], O_RDONLYi | O_NONBLOCK);
		if (fd == -1)
		{
			ft_putstr("error\n");
			exit ;
		}
		read_file(fd);
		if (close(fd) == -1)
		{
			ft_putstr("error\n");
			exit;
		}
	}
	/*function to solve the file
	  function to return the solution found*/
	return (0);
}
