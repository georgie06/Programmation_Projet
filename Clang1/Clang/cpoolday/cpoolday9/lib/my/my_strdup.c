/*
** EPITECH PROJECT, 2020
** strdup
** File description:
** 
*/
#include <stdlib.h>
char *strdup(char const *s)
{
    int length;
    char *dest = malloc(sizeof(char) *length + 1);

    for(int i = 0; s[i] != '\0'; i++)
    {
        dest[i] = s[i];
    } 
        return(dest);
}
