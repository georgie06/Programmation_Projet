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
int check_op(char *str);
int fs_open_file(char const *filepath);
void fs_understand_return_of_read(int fd, char *buffer, int size);
void fs_cat_500_bytes(char const *filepath);
void fs_cat_x_bytes(char const *filepath , int x);
void fs_print_first_line(char const *filepath);


#endif /* MY_LIB_ */
