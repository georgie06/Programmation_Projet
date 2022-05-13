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

int my_strlen(char const *str);
int my_putstr(char const *str);
void my_putchar(char c);

int fs_open_file(char const *filepath)
{
    int fd = open(filepath,O_RDONLY);
    int len = my_strlen(filepath);
    void *buf[len];

    if (fd == -1) {
        my_putstr("FAILURE\n");
        return -1;
    }
    else {
        read(fd,buf,len);

        my_putstr("SUCCESS\n");
        return fd;
    }
    return 0;
}
