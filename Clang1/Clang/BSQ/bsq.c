/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** bootstrap1
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "include/my.h"

char **load_2d_arr_from_file(char const *filepath, int nb_rows, int nb_cols);
int my_strlen(char const *str);
int my_putstr(char const *str);
void my_putchar(char c);

int fs_open_file(char const *filepath)
{
    struct stat *buff = malloc(sizeof(struct stat));
     
    int fd = open(filepath,O_RDONLY);
    int size = 0;
    int nb_rows = 0;
    int nb_cols = 0;
    char *buffer = NULL;
    char **tmp1 = NULL;
    size = buff->st_size;
    buffer = malloc(sizeof(char)*size+1);
    stat(filepath,buff);
    int tmp = read(fd,buffer ,size);
    if (fd == -1) {
        return 84;
    }
    else {
        fs_understand_return_of_read(fd, buffer, size);
        if (tmp == 0) {
            tmp1 = load_2d_arr_from_file(filepath,nb_rows,nb_cols);
        }
    }
    free(buffer);
    close(fd);
    return 0;
}
int main (int ac, char **av) {
    if (ac > 2)
        return 84;
    char const *str = av[1];
    fs_open_file(str);
}
