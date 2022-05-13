/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** exo3
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "include/my.h"

int my_strlen( char const *str);
void my_putchar(char c);

void fs_cat_500_bytes(char const *filepath)
{
    int fd = 0,size = 0, tmp = 0,i = 0;
    char buffer[10000];

    fd = open(filepath,O_RDONLY);
    size = 500;
    tmp = read(fd, buffer, size);
    buffer[tmp] = '\0';
    for (i = 0; buffer[i] != '\0';i++){
        my_putchar(buffer[i]);
    }
    my_putchar('\n');
    close(fd);
}
