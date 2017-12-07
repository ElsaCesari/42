# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecesari <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/15 17:52:48 by ecesari           #+#    #+#              #
#    Updated: 2017/12/07 12:07:51 by ecesari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Werror -Wextra

NAME = fillit 

SOURCES =	main_fillit.c\
			check_file.c\
			solve_fillit.c\
			snippy.c\
			list_tetri.c \
			move_it.c
		
OBJECTS = $(SOURCES:.c=.o)

HEADER = fillit.h

LIB = libft.a

.PHONY : all clean fclean re

all: $(NAME)

$(LIB):
	@make re -C Libft/	

$(NAME): $(LIB)
	$(CC) $(CFLAGS) $(SOURCES) -L Libft -lft -I $(HEADER) -o $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
