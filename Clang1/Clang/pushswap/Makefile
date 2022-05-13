##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC	=	rotate.c	\
		my_atoi.c	\
		my_putstr.c	\
		my_putchar.c

OBJ	=	$(NAME)

NAME	=	push_swap

CC = gcc
all: $(NAME)

$(NAME):
	$(CC) -o $(NAME) $(SRC) $(CPPFLAGS) $(CFLAGS) $(LDFLAGS)
clean:
	rm -f $(OBJ)
	rm -f *#
	rm -f *~

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
