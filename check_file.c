/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 11:54:29 by ecesari           #+#    #+#             */
/*   Updated: 2017/12/07 09:57:20 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#define BUF_SIZE	555 //546 = 21 characters * 26 tetriminos max

int	read_file(int fd)
{
	int		ret;
	char	buf[BUF_SIZE];
	int dot;
	int hash;
	int line;

	dot = 0;
	hash = 0;
	line = 0;
	ret = read(fd, buf, BUF_SIZE + 1);
	buf[ret] = '\0';
	if (check_char(buf, dot, hash, line) == 0 || check_shape(buf, line) == 0)
		return (-1);
	return (0);
}

int	check_char(char *str, int dot, int hash, int line)
{
	int x;
	int	tetri;

	x = 0 ;
	tetri = 0;
	while (str[x])
	{
		dot = 0;
		hash = 0;
		line = 0;
		while (line < 5 && str[x])	
		{
			if (str[x] != '.' && str[x] != '#' && str[x] != '\n') 
				return (0);
			dot = (str[x] == '.') ? ++dot : dot;
			hash = (str[x] == '#') ? ++hash : hash;
			line = (str[x] == '\n') ? ++line : line;
			if (str[x] == '\n' && line != 5)
				if ((4 * line) != (dot + hash))
					return (0);
			x++;
		}
		tetri++;
		if (!(dot == 12 && hash == 4))
			return (0);
	}
	return (tetri);
}

void	only_displaying(t_list *lst) //to be erased
{
	t_tetri	*bloum;

	while (lst)
	{
		bloum = (t_tetri*)lst->content;
		printf("%d \n", bloum->x[0]);
		lst = lst->next;
	}
}

int	check_shape(char *str, int line)
{
	int x;
	int cont;
	t_tetri *link;
	
	x = 0;
	link = NULL;
	while (str[x])
	{
		cont = 0;
		line = 0;
		while (line < 5 && str[x])
		{
			if (str[x] == '#')
			{	
				cont = (str[x + 1] == '#') ? ++cont : connect;
				cont = (str[x - 1] == '#') ? ++cont : cont;
				cont = (str[x + 5] == '#' && line < 3) ? ++cont : cont;
				cont = (str[x - 5] == '#' && line != 0) ? ++cont : cont;
			}
			line = (str[x] == '\n') ? ++line : line;
			x++;
		}
		if (connect != 6 && connect != 8)
			return (0);
	}
	link = snippy(str, &lst);
	only_display(lst);
	move_it(link);
	return (1);
}
