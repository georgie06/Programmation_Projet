/*
** EPITECH PROJECT, 2021
** epitech 
** File description:
** cat
*/
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "my.h"
void my_cat (const char *path)
{
    char buffer[1000];
    int fd = 0;
    ssize_t read1 = 0;
    int i = 0;
    fd = open(path, O_RDONLY);
    read1 = read(fd,buffer, 1000);

    while (buffer[i] != NULL) {
        i++;
        my_putchar(buffer[i]);
    }
    close (fd);
}
int main (int ac, char **av)
{
    int i = 0;
    for(i = 1; i != ac; i++) {
        my_cat(av[i]);
    }
    return 0;
}





