/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** concate params
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int my_strlen(char const *s);
char *my_strcat(char *dest, char const *src);
char *str_if(char *str, int len);

char *concat_params(int ac, char **av)
{
    char *str = NULL;
    int i;
    int len = 0;
    int k = 0;
    
    for (i = 0 ; i != ac; i++) {
        len = len + my_strlen(av[i]);
    }
    str = malloc(sizeof(char) * (len + ac + 1));
    str[0] = '\0';
    for (i = 0; i != ac; i++) {
        my_strcat(str, av[i]);
        my_strcat(str, "\n");
    }
    str[len + ac - 1] = '\0';
    return (str);
}
