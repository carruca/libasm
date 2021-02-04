# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsierra- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/01 09:44:35 by tsierra-          #+#    #+#              #
#    Updated: 2021/02/04 15:43:45 by tsierra-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

SRC = ft_strlen.s \
	  ft_strcpy.s \
	  ft_strcmp.s

OBJ = $(SRC:.s=.o)

CSRC = main.c \
	   ft_tolower.c \
	   ft_toupper.c

SRCDIR = src/
OBJDIR = obj/

RM = rm -f
CC = gcc
NASM = nasm -f macho64
MKDIR = mkdir -p

.PHONY: clean fclean all re

all:
	# $(NASM) $(SRC)
	$(CC) $(CSRC) $(OBJ)
	
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
