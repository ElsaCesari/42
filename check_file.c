/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 11:54:29 by ecesari           #+#    #+#             */
/*   Updated: 2017/12/01 16:51:54 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#define BUF_SIZE	555 //546 = 21 characters * 26 tetriminos max

int	read_file(int fd)
{
	int		ret;
	char	buf[BUF_SIZE];

	ret = read(fd, buf, BUF_SIZE + 1);
	buf[ret] = '\0';//to be checked if necessary to put a final '\0'
	check_shape(buf);
	return (0);
}

int	count_char(char *str, char c)
{
	int x;
	int count_char;

	x = 0 ;
	count_char = 0;
	while (str[x])
	{
		if (str[x] == c)
			count_char++;
		x++;
	}
	return (count_char);
}

int	check_char(char *str)
{
	int x;

	x = 0 ;
	while (str[x])
	{
		if ((str[x] != '.' && str[x] != '#' && str[x] != '\n') ||
			(count_char(str, '.') % 12 != 0 && count_char(str, '#') % 4 != 0
			 && (count_char(str, '\n') + 1) % 5 != 0))
			return (0);
		x++;
	}
	return (1);
}

int	check_shape(char *str)
{
	int x;
	int connect;

	x = 0;
	connect = 0;		
	if (check_char(str) == 1)
	{	
		while (str[x])
		{
			if (str[x] == '#' && str[x + 1] == '#' )	
				connect++;
			if (str[x] == '#' && str[x - 1] == '#' )	
				connect++;
			if (str[x] == '#' && str[x + 5] == '#' )	
				connect++;
			if (str[x] == '#' && str[x - 5] == '#' )	
				connect++;
			x++;
		}
		printf("%d", connect);
		if (connect == 6 || connect == 8)
			return (1);
	}
	return (0);
}
