## EPITECH PROJECT, 2021
## epitech
## File description:
## Makefile
##

SRC	=	solostumper6.c	\

NAME = solostumper6
OBJ	=	$(SRC:.c=.o)
CC	=	gcc

all:	$(NAME)
	rm -f $(OBJ)
	rm -f *#
	rm -f *~

$(NAME):
		$(CC) -o $(NAME) $(SRC) -Wextra

clean   :	rm -f   $(OBJ)

fclean :
	rm -f $(NAME) $(OBJ)
	rm *~
.PHONY: all clean fclean re
