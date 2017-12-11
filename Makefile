# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecesari <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/15 17:52:48 by ecesari           #+#    #+#              #
#    Updated: 2017/12/07 18:43:54 by ecesari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Werror -Wextra

NAME = fillit 

SOURCES =	main_fillit.c\
			check_file.c\
			cut.c\
			list_tetri.c\
			move_it.c\
			map.c\
			place.c\
			error.c
		
OBJECTS = $(SOURCES:.c=.o)

HEADER = fillit.h

LIB = libft.a

.PHONY : all clean fclean re

all: $(NAME)

$(NAME):
	@make re -C Libft/	
	@$(CC) $(CFLAGS) -c $(SOURCES)
	@$(CC) $(CFLAGS) -o $(NAME) Libft/$(LIB) $(OBJECTS)

clean:
	@make clean -C Libft/
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@make fclean -C Libft/
	@/bin/rm -f $(NAME)

re: fclean all
