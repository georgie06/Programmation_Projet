## EPITECH PROJECT, 2021
## epitech
## File description:
## Makefile
##

SRC	=	my_putchar.c	\
		my_putstr.c	\
		my_strlen.c	\
		my_put_nbr.c	\
		my_printf.c	\
		strupcase.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a
all     :       $(NAME)

$(NAME)	:	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean   :	rm -f   $(OBJ)

fclean :
	rm -f $(NAME) $(OBJ)
	rm *~
.PHONY: all clean fclean re
