/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 15:59:33 by ecesari           #+#    #+#             */
/*   Updated: 2017/11/30 14:54:12 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "Libft/libft.h"
# include	<sys/types.h>
# include	<sys/stat.h>
# include	<fcntl.h>

typedef	struct	link_chained_list
{
	char						*str;
	struct link_chained_list	*next;
}				tetriminos;

int	read_file(int fd);

#endif
