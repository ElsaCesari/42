/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 15:59:33 by ecesari           #+#    #+#             */
/*   Updated: 2017/12/01 16:51:21 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include "Libft/libft.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

#include <stdio.h>

typedef	struct	s_link_chained_list
{
	char						*str;
	struct s_link_chained_list	*next;
}				t_tetriminos;

int				read_file(int fd);
int				count_char(char *str, char c);
int				check_char(char *str);
int				check_shape(char *str);

#endif
