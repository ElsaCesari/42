/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 08:42:41 by ecesari           #+#    #+#             */
/*   Updated: 2017/11/27 12:25:08 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lnew;

	if (!(lnew = (t_list *)malloc(sizeof(*lnew))))
		return (NULL);
	if (content == NULL)
	{
		lnew->content = NULL;
		lnew->content_size = 0;
	}
	else
	{
		if (!(lnew->content = malloc(content_size)))
			return (NULL);
		ft_memcpy(lnew->content, content, content_size);
		lnew->content_size = content_size;
	}
	lnew->next = NULL;
	return (lnew);
}
