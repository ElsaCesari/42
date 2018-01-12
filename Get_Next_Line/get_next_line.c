/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecesari <ecesari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 17:45:39 by ecesari           #+#    #+#             */
/*   Updated: 2018/01/12 16:05:18 by ecesari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
//#include	<stdio.h> //NE PAS OUBLIER DE SUPPRIMER		
		
static t_list	*check_fd(t_list **list, int fd)
{
	t_list	*tmp;
	t_list	*tmp_previous;//pointeur sur le dernier maillon de la liste 

	if (fd < 0)
		return (NULL);
	tmp = *list;
	tmp_previous = NULL;
	while (tmp != NULL)
	//tant que la liste existe on verifie qu'elle ne contient pas le fd a verifier > si oui on renvoie le maillon correspondant > sinon on se met a la fin de la liste
	{
		if ((int)tmp->content_size == fd)
			return (tmp);
		tmp_previous = tmp;
		tmp = tmp->next;
	}
	tmp = ft_lstnew(NULL, 0);//creation d'un maillon avec un nouveau fd(qui du coup n'a pas ete lu par le while)
	tmp->content_size = (size_t)fd;
	if (!tmp_previous)//cas d'une **list vide > creation du premier maillon
	//si le tmp_previous est reste a NULL et donc n'est pas rentre dans la boucle while
		*list = tmp;
	else
		tmp_previous->next = tmp;//on met le fd juste cree a la fin de la liste
	
	return (tmp);
}

static int	inside_list_content(t_list *list, char **line) //alimenter line a partir du list->content (reste du buffer)
{
	char *str;
	int x;

	x = 0;
//	ft_putendl("to begin");
	if (list->content)//si il y a deja eu une lecture et donc que list->content n'est pas nul
	{
		while (((char*)list->content)[x] && ((char*)list->content)[x] != '\n')
			x++;
		str = ft_strsub((char*)list->content, 0, x);//on copie list->content dans str du depart jusqu x caracteres => soit entierement (si \0) ou \n
//		ft_putendl("verif sub");
		*line = ft_strjoin_delete(*line, str, 1, 1);//on efface le precedent pointeur sur line pour le mettre au debut du nouveau line (qui contient un troncon jusququ \n)
//		ft_putendl("a");
		if (((char*)list->content)[x] == '\n')// si on etait a \n
		{
			str = ft_strdup((char*)list->content + x + 1);//on copie dans str qui vient d'etre libere du caracetre apres le \n jusqua la fin
			ft_strdel((char**)&(list->content));//revoir l'ecriture mais on libere et on met le pointeur a NULL du list->content
			list->content = str;
			return (1);//ligne a ete lue mais lecture n'a pas ete terminee
		}
		else
			ft_strdel((char**)&(list->content));
	}
	return (0);//lecture terminee
}

int get_next_line(const int fd, char **line)
{
    char            buf[BUFF_SIZE + 1];//le buffer qui va contenir le resultat de read
    int             ret;//le retour de read en nombre d'octet
	static t_list   *list;//la liste contenant le fd ((size_t)list->content_size) et le buffer ((char*)list->content)
	t_list			*tmp;//variable temporaire pour ne pas perdre le debut de list

	if ((tmp = check_fd(&list, fd)) == NULL || line == NULL || read(fd, buf, 0) < 0)
		return (-1);
	*line = ft_strnew(0); //on initialise line a 0
	if (inside_list_content(tmp, line) == 1)//s'il y avait deja quelque chose dans line
		return (1);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0) //tant que la lecture n'est pas finie
	{
		buf[ret] = '\0';
		tmp->content = ft_strdup(buf);
		if (inside_list_content(tmp, line) == 1)
			return (1);
	}
	if (**line)
		return (1);
	return (0);
}
/*
#include	<sys/types.h> //NE PAS OUBLIER DE SUPPRIMER		
#include	<sys/stat.h> //NE PAS OUBLIER DE SUPPRIMER		
#include	<fcntl.h> //NE PAS OUBLIER DE SUPPRIMER		

int main(int ac, char **av) //NE PAS OUBLIER DE SUPPRIMER		
{		
    int     fd;		
    char    *line;		
		
    line = NULL;		
    if (ac != 2)		
        return (0);		
    else		
    {		
        fd = open(av[1], O_RDONLY);		
		while (get_next_line(fd, &line))		
		{		
			printf("--%s--\n", line);		
			free(line);		
		}		
    }		
//	sleep(25);		
    return (0);		
} */