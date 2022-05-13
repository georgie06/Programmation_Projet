##
## EPITECH PROJECT, 2021
## for printf 
## File description:
## Makefile
##

SRC =	source/main.c	\
	source/gene_map.c	\
	source/my_putstr.c	\
	source/my_putchar.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	generator

CFLAGS	=	 -Wall -Wextra -g3

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
