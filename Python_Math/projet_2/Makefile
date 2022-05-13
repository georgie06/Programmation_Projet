##
## EPITECH PROJECT, 2021
## epitech
## File description:
## Makefile
##

SRC = translation.py

NAME = 102architect


all: $(NAME)


$(NAME)	:	$(OBJ)	
			cp $(SRC) ./$(NAME)
			chmod 777 $(NAME)


clean:
	rm -f $(OBJ)
	rm -f *#
	rm -f *~

fclean:
	rm -f $(NAME) $(OBJ)

re: fclean all

.PHONY: re fclean clean all
