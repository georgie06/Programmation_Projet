##
## EPITECH PROJECT, 2021
## epitech
## File description:
## Makefile
##

SRC = 103cipher.py

NAME = 103cipher


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
