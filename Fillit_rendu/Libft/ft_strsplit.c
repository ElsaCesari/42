/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 12:47:38 by ecesari           #+#    #+#             */
/*   Updated: 2017/11/24 18:23:02 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		nbr_words(char *str, char c)
{
	int	x;
	int	nbr_words;

	x = 0;
	nbr_words = 0;
	if (str[x] == '\0')
		return (0);
	while (str[x])
	{
		if (str[x] && str[x] != c && str[x + 1] == c)
			nbr_words++;
		x++;
	}
	if (str[x - 1] != c)
		nbr_words++;
	return (nbr_words);
}

static int		size_word(char *str, char c)
{
	int	x;

	x = 0;
	while (str[x] != '\0' && str[x] != c)
		x++;
	return (x);
}

static char		*put_word(char *str, int lenght_word)
{
	char	*word;
	int		x;

	x = 0;
	if (!(word = (char *)malloc(sizeof(char) * (lenght_word + 1))))
		return (NULL);
	while (x < lenght_word)
	{
		word[x] = str[x];
		x++;
	}
	word[x] = '\0';
	return (word);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**word_tab;
	int		count;
	int		x;
	int		x_word;
	int		lenght_word;

	if (!s || !c)
		return (NULL);
	word_tab = NULL;
	count = nbr_words((char *)s, c);
	x = 0;
	x_word = 0;
	if (!(word_tab = (char **)malloc(sizeof(char *) * (count + 1))))
		return (NULL);
	while (count != 0)
	{
		while (((char *)s)[x] == c)
			x++;
		lenght_word = size_word((char *)s + x, c);
		word_tab[x_word++] = put_word((char *)s + x, lenght_word);
		x = x + lenght_word;
		count--;
	}
	word_tab[x_word] = NULL;
	return (word_tab);
}
