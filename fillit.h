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

# define BUF_SIZE	546

typedef struct			s_tetriminos
{
	int					x[4];
	int					y[4];
	char				c;
	char				padding_first;
	short				padding_second;
	int					padding_third;
	struct s_tetriminos	*next;
}						t_tetri;
int						read_file(int fd);
int						check_char(char *str);
int						check_shape(char *str);
void					split_buf(t_tetri **list, char *str);
int						smallest_square(t_tetri *list);
char					**create_map(int n);
char					*create_line(int n);
int						ft_print_map(char **map);
t_tetri					*ft_lnew();
t_tetri					*ft_lst_add(t_tetri **start_list);
int						ft_lstcount(t_tetri *list);
t_tetri					*move_it(t_tetri *link);
int						place_is_free
						(char **map, t_tetri *link, int j, int i);
int						placing(char **map, t_tetri *link);
void					ft_put(char **map, t_tetri *link, int i, int j);
char					**map_size_up(char **map, t_tetri *link);
void					ft_error(void);
#endif
