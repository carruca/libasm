# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsierra- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/01 09:44:35 by tsierra-          #+#    #+#              #
#    Updated: 2021/02/10 15:19:12 by tsierra-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

EXEC = a.out

SRC = ft_strlen.s \
	  ft_strcpy.s \
	  ft_strcmp.s \
	  ft_write.s \
	  ft_read.s \
	  ft_strdup.s

OBJ = $(SRC:.s=.o)

SRCDIR = src/
OBJDIR = obj/

RM = rm -f
CC = gcc -Wall -Werror -Wextra
AR = ar rc
NASM = nasm -f macho64
MKDIR = mkdir -p

all: $(NAME)

%.o: %.s
	$(NASM) $<

$(NAME): $(OBJ)
	$(AR) $(NAME) $^

run: $(NAME)
	$(CC) $(NAME) main.c -o $(EXEC)
	./$(EXEC)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(EXEC)

re: fclean all

.PHONY: clean fclean all re run
