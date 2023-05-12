# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/08 00:35:33 by azgaoua           #+#    #+#              #
#    Updated: 2023/05/12 16:46:57 by azgaoua          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = server

NAME_C = client

CC = cc

RM = rm -rf

FLGS = -Wall -Wextra -Werror

all : $(NAME) $(NAME_C)

%.o: %.c minitalk.h
	$(CC) $(FLGS) -c $<

$(NAME) : server.c fts.c
	$(CC) $(FLGS) server.c fts.c -o $(NAME)

$(NAME_C) : client.c fts.c
	$(CC) $(FLGS) client.c fts.c -o $(NAME_C)

clean:
	$(RM) server.o client.o fts.o

fclean: clean
	$(RM) $(NAME) $(NAME_C)

re: fclean all
