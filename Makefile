# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsierra- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/01 09:44:35 by tsierra-          #+#    #+#              #
#    Updated: 2021/02/09 16:53:09 by tsierra-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

SRC = ft_strlen.s \
	  ft_strcpy.s \
	  ft_strcmp.s \
	  ft_write.s \
	  ft_read.s

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

%.o: %.s
	$(NASM) $<

all: $(OBJ)
	$(CC) $(CSRC) $(OBJ)
	
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) a.out

re: fclean all
