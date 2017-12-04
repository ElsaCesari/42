/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 18:59:46 by ecesari           #+#    #+#             */
/*   Updated: 2017/12/04 19:47:54 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
// cherche a mettre a la fin de begin list l'element *list
 
void	ft_push_back(t_list **begin_list, t_list *list)
{
	t_list *tmp;

	if (!(*begin_list))
		*begin_list = list;	
	else
	{
		tmp = *begin_list;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = list;
	}
}
