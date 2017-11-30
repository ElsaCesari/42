/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 11:54:29 by ecesari           #+#    #+#             */
/*   Updated: 2017/11/30 15:00:01 by ecesari          ###   ########.fr       */
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
	ft_putstr(buf);
	//	check_file(buf);//to be checkef if this way is correct
	return (0);
}

/*int	check_file(char *str)
{

}
*/
