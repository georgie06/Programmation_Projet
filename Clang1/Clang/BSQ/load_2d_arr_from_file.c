/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** load 2d arr from file
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include "include/my.h"

int count_line(char const *str);
int my_strlen2(char const *str);
void my_putchar(char c);
char* my_strncat(char *dest, const char *src);

char **load_2d_arr_from_file(char const *filepath, int nb_rows, int nb_cols)
{
    struct stat *buff = malloc(sizeof(struct stat));
    int fd = 0,j=0,tmp = 0,i = 0,k;
    char **tmp2 = NULL;
    int size = 0;
    int count = 0;
    char *buffer = NULL;
    fd = open(filepath,O_RDONLY);
    stat(filepath,buff);
    size = buff->st_size;
    buffer = malloc(sizeof(char)*size+1);;
    tmp = read(fd,buffer ,size);
    buffer[tmp] = '\0';
    char *str = malloc(sizeof(char)*size);
   
    nb_rows = count_line(buffer);
    nb_cols = my_strlen2(buffer);
    my_strncat(str,buffer);
    tmp2 = (char**)malloc(nb_rows*sizeof(char*));
    for (i = 0,k = 0; i < nb_rows; i++) {
        tmp2[i] = (char *)malloc(nb_cols * sizeof(char));
        for(j = 0; j < nb_cols;j++,k++) {
            tmp2[i][j] = str[k];
        }
    }
    for(i = 0; i < nb_rows; i++)
        for(j = 0;j < nb_cols; j++) {
            my_putchar(tmp2[i][j]);
        }
    free(buffer);
    close(fd);
    return tmp2;
}

int my_strlen3(char const *str) {
    int i = 0;
    int count = 0;

    for(;str[i] != '\n';i++);
    i++;
    return i;
}

int count_line(char const *str) {
    int i = 0;
    int count = 0;
    for(;str[i] != '\0';i++) {
        if (str[i] == '\n')
            count++;
    }
    return count-1;
}

int my_strlen2(char const *str) {
    int i = 0;
    int count = 0;
    
    for(;str[i] != '\n';i++);
    i++;
    for(;str[i] != '\n';i++)
        count ++;
    return count;
}
char* my_strncat(char *dest, const char *src)
{
    size_t dest_len = my_strlen(dest);
    size_t i;
    
    for (i = my_strlen3(src) ; src[i] != '\0' ; i++)
        dest[dest_len + i] = src[i];
    dest[dest_len + i] = '\0';
    
    return dest;
}
