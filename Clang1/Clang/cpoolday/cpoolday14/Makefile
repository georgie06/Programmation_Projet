##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile for do_op
##


SRC	=	my_add.c	\
		my_soust.c	\
		my_mult.c	\
		my_division.c	\
		my_modulo.c	\
		main.c	\
		bistromatique.c

OBJ	=	$(NAME)

NAME	=	calc

CPPFLAGS	=	-I./include

all:	$(NAME)

$(NAME):
	(cd lib/my && make && cd ../..)
	gcc -o $(OBJ) $(SRC) -lm $(CPPFLAGS) -Llib/my -lmy

clean:
	find -type f \( -name '*~' -or -name '#*#' \) -delete

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
