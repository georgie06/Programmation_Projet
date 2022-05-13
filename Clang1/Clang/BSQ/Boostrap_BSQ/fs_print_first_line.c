/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** exo5
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "include/my.h"

void my_putchar(char c);
int my_strlen(char const *str);
void fs_print_first_line(char const *filepath)
{
    int fd = 0, tmp = 0,i = 0;
    char buffer[10000];
    int len = my_strlen(filepath);

    fd = open(filepath,O_RDONLY);
    tmp = read(fd, buffer,len);
    buffer[tmp] = '\0';

    for (i = 0; i <= 30;i++){
        my_putchar(buffer[i]);
    }
    close(fd);
}
