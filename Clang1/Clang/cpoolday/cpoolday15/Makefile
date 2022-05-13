##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC	=	evalexpert.c	\
		annex1.c	\
		annex2.c	\
		calculstr.c	

NAME = Eval_expert

OBJ = $(SRC:.c=.o)

CC = gcc

SRCPATH = ./src/

LIBPATH = ./lib/my/

CFLAGS = -Wall -Wextra

CPPFLAGS = -I./include/ -g

LDFLAGS = -L./lib/my/ -lmy


all: $(NAME)

libmy:
	make -C lib/my/

$(NAME):	libmy $(OBJ)

		$(CC) -o $(NAME) $(SRC) $(CPPFLAGS) $(CFLAGS) $(LDFLAGS)

clean:
	make -C lib/my/ clean
	rm -f $(OBJ)
	rm -f *#
	rm -f *~

fclean:
	make -C lib/my/ fclean
	rm -f $(NAME) $(OBJ)

re: fclean all

.PHONY: re fclean clean all

