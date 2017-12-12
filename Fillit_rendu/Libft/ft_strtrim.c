/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 16:00:10 by ecesari           #+#    #+#             */
/*   Updated: 2017/11/24 20:28:19 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str_new;
	size_t	len;
	size_t	st;
	size_t	en;

	if (!s)
		return (0);
	st = 0;
	en = ft_strlen(s) - 1;
	while (s[st] && (s[st] == ' ' || s[st] == '\n' || s[st] == '\t'))
		st++;
	while (st < en && (s[en] == ' ' || s[en] == '\n' || s[en] == '\t'))
		en--;
	len = en - st + 1;
	str_new = ft_strsub(s, st, len);
	return (str_new);
}
