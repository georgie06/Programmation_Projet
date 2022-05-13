## EPITECH PROJECT, 2021
## epitech
## File description:
## Makefile
##

SRC	=	function.c	\
		test.c	\
		my_putchar.c	\
		my_putstr.c	\
		my_strlen.c	\
		my_put_nbr.c	\
		my_printf.c	\
		strupcase.c

NAME = mysokoban
OBJ	=	$(SRC:.c=.o)
CC	=	gcc

all:	$(NAME)
	rm -f $(OBJ)
	rm -f *#
	rm -f *~

$(NAME):
		$(CC) -o $(NAME) $(SRC) -Wextra -Werror

clean   :	rm -f   $(OBJ)

fclean :
	rm -f $(NAME) $(OBJ)
	rm *~
.PHONY: all clean fclean re