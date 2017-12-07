/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 15:59:33 by ecesari           #+#    #+#             */
/*   Updated: 2017/12/07 12:24:01 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include "Libft/libft.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# include <stdio.h> // to be erased !!!

typedef struct 	s_tetriminos
{
	int				x[4];
	int 			y[4];
	char 			c;
	struct s_tetriminos	*next;
}				t_tetri;

int				read_file(int fd);
int				check_char(char *str, int dot, int hash, int line);
int				check_shape(char *str, int line);
void			ft_push_back(t_tetri **begin_list, t_tetri *list);
t_tetri			*snippy_rest(char *str);
t_tetri			*snippy_first_tetri(char *str);
void			move_it(t_tetri *link);
t_tetri			*ft_listnew(int x[4], int y[4], char c);
void			only_displaying(t_tetri *list);
void			ft_display_the_result(t_tetri *list);
#endif
