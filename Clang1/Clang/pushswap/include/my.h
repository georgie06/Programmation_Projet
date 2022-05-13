/*
** EPITECH PROJECT, 2021
** epitech myh bootstrap
** File description:
** 
*/

#ifndef MY_LIB_
#define MY_LIB_

#define ITOC(x) (x + 48)
#define CTOI(x) (x - 48)

void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
int fs_open_file(char const *filepath);
int fs_understand_return_of_read(int fd, char *buffer, int size);

#endif /* MY_LIB_ */
