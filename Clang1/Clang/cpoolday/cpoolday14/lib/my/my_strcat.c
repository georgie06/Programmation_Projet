/*
** EPITECH PROJECT, 2021
** strcat
** File description:
** concatenates two strings
*/

#include <stddef.h>

int my_strlen(char const *str);
char *my_strcat(char *dest , char const *src)
{
    int i;
    int length = my_strlen(dest);
    
    for (i = 0; src[i] != '\0'; i++) {
        dest[length] = src[i];
        length++;
    }
    dest[length] = '\0';
    return dest;
}
