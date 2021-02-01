NAME = libasm.a

SRC = main.c \
	  ft_strlen.c
OBJ = $(SRC:.c=.o)

SRCDIR = src/
OBJDIR = obj/

RM = rm -f
CC = gcc
NASM = nasm
MKDIR = mkdir -p

.PHONY: clean fclean all re

all:
	$(CC) $(SRC)
	
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
