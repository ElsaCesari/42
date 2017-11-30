/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 11:54:29 by ecesari           #+#    #+#             */
/*   Updated: 2017/11/30 18:17:12 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#define BUF_SIZE	546 //546 = 21 characters * 26 tetriminos max

//the function that will check that the shapes are valid

int	read_file(int fd)
{
	int		ret;
	char	buf[BUF_SIZE];

	ret = read(fd, buf, BUF_SIZE + 1);
	buf[ret] = '\0';//to be checked if necessary to put a final '\0'
	check_file(buf);
	return (0);
}

int	check_file(char *str)
{
	int x;
	int	

	x = 0 ;
	while (str[x])
	{
		if (str[x] != '.' || str[x] != '#' || str[x] != '\n')
			exit (-1);
		if ()
		x++;
	}
}


int	check_file_draft(char *str)
{
	int x;

	x = 0;
	while (file)
	{
		if (!(only: #, \n, .))
			exit;
		if (4l && 5th c == \n)
		{
			if (4c + \n)
				incrememnt line
			if (l = only $) or  (line_count %5 !=0 only \n) 
				increment block counter;
				increment line;
			if (end block? == 5$ && no more characters)
				increment block; 
		}
		exit;
		if(!(6-8 connected #)
			// use recursion?
			exit;
		return(ready)
	}
}

void	cutcut(char *str)
{
	Here we cut the file into tetrimonos;
}
