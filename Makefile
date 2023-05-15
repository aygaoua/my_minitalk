# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/08 00:35:33 by azgaoua           #+#    #+#              #
#    Updated: 2023/05/15 16:01:53 by azgaoua          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_S = server

NAME_S_B = server_bonus

NAME_C = client

NAME_C_B = client_bonus

OBJS = fts.o client.o server.o

OBJS_B = fts_bonus.o client_bonus.o server_bonus.o

CC = cc

RM = rm -rf

FLGS = -Wall -Wextra -Werror

all :  $(NAME_S) $(NAME_C)

bonus :  $(NAME_S_B) $(NAME_C_B)

%.o: %.c
	@echo " making : $@ \n (from this : >> $< <<) \n /-|-|-|-|-|-|-|-|-|-|-/"
	@$(CC) $(FLGS) -c $<

$(NAME_S) : server.c fts.c minitalk.h
	@echo "making the server of minitalk"
	@$(CC) $(FLGS) server.c fts.c -o $(NAME_S)

$(NAME_S_B) : server_bonus.c fts_bonus.c minitalk_bonus.h
	@echo "making the server_bonus of minitalk \"BONUS !!\""
	@$(CC) $(FLGS) server_bonus.c fts_bonus.c -o $(NAME_S_B)

$(NAME_C) : client.c fts.c minitalk.h
	@echo "making the client of minitalk"
	@$(CC) $(FLGS) client.c fts.c -o $(NAME_C)

$(NAME_C_B) : client_bonus.c fts_bonus.c minitalk_bonus.h
	@echo "making the client_bonus of minitalk \"BONUS !!\""
	@$(CC) $(FLGS) client_bonus.c fts_bonus.c -o $(NAME_C_B)

clean:
	@echo "clean all this files if exist: --> $(OBJS) $(OBJS_B)"
	@$(RM) $(OBJS) $(OBJS_B)

fclean: clean
	@echo " + that  if exist --> $(NAME_S) +  $(NAME_C)  +  $(NAME_S_B) +  $(NAME_C_B)"
	@$(RM) $(NAME_S) $(NAME_C) $(NAME_S_B) $(NAME_C_B)

re: fclean all
