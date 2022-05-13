##
## EPITECH PROJECT, 2021
## for printf 
## File description:
## Makefile
##

SRC =	source/my_putchar.c	\
	source/my_putstr.c	\
	source/my_strlen.c	\
	source/my_put_nbr.c	\
	source/main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	solver

CFLAGS	=	 -Wall -Wextra

CPPFLAGS +=	-I./include 

all	:	$(NAME)


$(NAME)	:	$(OBJ)
	gcc -o $(NAME) $(OBJ)

clean	:	
	$(RM) $(OBJ)
	rm -f *~
	rm -f *#
	rm -f *.gcda
	rm -f *.gno
	rm -f *.gcov
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re:	fclean all $(NAME)

.PHONY: all clean fclean re
