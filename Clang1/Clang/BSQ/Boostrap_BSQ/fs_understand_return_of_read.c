/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** exo2
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "include/my.h"

int my_putstr (char const *str);

void fs_understand_return_of_read(int fd, char *buffer, int size)
{
    int readf = read(fd,buffer,size);
    if (readf == -1)
        my_putstr("read failed\n");
    if (readf == 0)
        my_putstr("read had nothing more to read\n");
    if (readf < size)
        my_putstr("read didn’t complete the entire buffer\n");
    if (readf == size)
        my_putstr("read completed the entire buffer\n");
}
