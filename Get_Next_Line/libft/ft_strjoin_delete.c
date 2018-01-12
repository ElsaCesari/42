/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_delete.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <ecesari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 15:29:44 by ecesari           #+#    #+#             */
/*   Updated: 2018/01/11 15:38:47 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_delete(char const *s1, char const *s2, int n1, int n2)
{
	char	*str_new;

	str_new = ft_strjoin((char *)s1, (char *)s2);
	if (n1 == 1)
		ft_strdel((char **)&s1);
	if (n2 == 1)
		ft_strdel((char **)&s2);
	return (str_new);
}
