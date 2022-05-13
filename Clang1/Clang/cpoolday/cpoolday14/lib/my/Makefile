##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## compile with a Makefile
##

SRC	=	my_putstr.c	\
		my_strlen.c	\
		my_putchar.c	\
		my_revstr.c	\
		my_put_nbr.c	\
		my_atoi.c	\
		my_strcat.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../

clean:
	rm -f $(OBJ)

fclean:	clean
	rm $(NAME)
	rm ../$(NAME)

re:	fclean all
