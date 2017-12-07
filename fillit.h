/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 15:59:33 by ecesari           #+#    #+#             */
/*   Updated: 2017/12/07 09:57:28 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include "Libft/libft.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# include <stdio.h> // to be erased !!!

typedef struct 	s_coordinates
{
	int				x[4];
	int 			y[4];
	char 			c;
	s_coordinates	*next;
}				t_tetri;

int				read_file(int fd);
int				check_char(char *str, int dot, int hash, int line);
int				check_shape(char *str, int line);
void			ft_push_back(t_list **begin_list, t_list *list);
t_tetri			*snippy(char *str, t_list **lst);
void			move_it(t_tetri *link);

#endif
