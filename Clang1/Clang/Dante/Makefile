##
## EPITECH PROJECT, 2021
## for printf 
## File description:
## Makefile
##

NAME	=	generator solver

CFLAGS	=	 -Wall -Wextra

CPPFLAGS +=	-I./include 

all	:	
		$(MAKE) -C ./solver
		$(MAKE) -C ./generator

clean	:	
	$(RM) $(OBJ)
	rm -f *#
	rm -f *.gcda
	rm -f *.gno
	rm -f *.gcov
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re:	fclean all $(NAME)

.PHONY: all clean fclean re
