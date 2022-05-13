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

int fs_understand_return_of_read(int fd, char *buffer, int size)
{
    int readf = read(fd,buffer,size);
    if (readf == -1)
        return 84;
    if (readf == 0)
        return 0;
    if (readf < size)
        return 84;
    if (readf == size)
        return 0;
    return 0;
}
