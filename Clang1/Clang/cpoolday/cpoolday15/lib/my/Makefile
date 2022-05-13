## EPITECH PROJECT, 2021
## epitech
## File description:
## Makefile
##

SRC	=	my_putchar.c	\
		my_putstr.c	\
		my_strlen.c	\
		my_strcpy.c	\
		my_strncpy.c	\
		my_revstr.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a
all     :       $(NAME)

$(NAME)	:	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean   :	rm -f   $(OBJ)

fclean :
	make -C lib/my/ fclean
	rm -f $(NAME) $(OBJ)
