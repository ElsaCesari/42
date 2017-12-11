/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 15:59:33 by ecesari           #+#    #+#             */
/*   Updated: 2017/12/07 19:47:20 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include "Libft/libft.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# include <stdio.h> // to be erased !!!

#define BUF_SIZE	555 //546 = 21 characters * 26 tetriminos max

typedef struct	s_tetriminos
{
	int					x[4];
	int					y[4];
	char				c;
	char				padding_first;
	short				padding_second;
	int					padding_third;
	struct s_tetriminos	*next;
}				t_tetri;

int		read_file(int fd);
int		check_char(char *str);
int		check_shape(char *str);
t_tetri	*snippy_rest(char *str);
t_tetri	*snippy_first_tetri(char *str);
t_tetri	*move_it(t_tetri *link);
t_tetri	*ft_lnew();
void	only_displaying(t_tetri *list);
void	ft_display_the_result(t_tetri *list);
void	ft_print_map(char **map);
char	**create_map(int n);
char	*create_line(int n);
int		smallest_square(t_tetri *list);
int		try_placing(char **map, t_tetri *link);
char	**placing(int i, int j, char **map, t_tetri link);
int		ft_lstcount(t_tetri *list);
void	ft_error(void);

t_tetri	*ft_test(char *str);
t_tetri *ft_lst_add(t_tetri *start_list);
t_tetri	*ft_test2(t_tetri *start_list, char *str);

#endif
