# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsierra- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/01 09:44:35 by tsierra-          #+#    #+#              #
#    Updated: 2021/02/01 11:07:36 by tsierra-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

SRC = main.c \
	  ft_strlen.c
OBJ = $(SRC:.c=.o)

SRCDIR = src/
OBJDIR = obj/

RM = rm -f
CC = gcc
NASM = nasm -f macho64
MKDIR = mkdir -p

.PHONY: clean fclean all re

all:
	$(CC) $(SRC)
	
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
