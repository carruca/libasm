# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsierra- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/01 09:44:35 by tsierra-          #+#    #+#              #
#    Updated: 2021/02/02 17:49:49 by tsierra-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

SRC = ft_strlen.s

CFILES = main.c \
	  ft_tolower.c \
	  ft_toupper.c
OBJ = $(SRC:.s=.o)

SRCDIR = src/
OBJDIR = obj/

RM = rm -f
CC = gcc
NASM = nasm -f macho64
MKDIR = mkdir -p

.PHONY: clean fclean all re

all:
	$(NASM) $(SRC)
	$(CC) $(CFILES) $(OBJ)
	
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
