/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** strcalcul
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char *str_dont_want2(char const *str)
{
    int i = 0;
    int j = 0;
    int x = 0;
    int len = my_strlen(str) - 1;
    char *tmp = malloc(len * sizeof(char));
    for(i = 1; i < len ; i++) {
        tmp[j] = str[i];
        j++;
    }
    tmp = dispatch(tmp);
    return tmp;
}

char *calcul (char const *str)
{
    int i= 0;
    int j= 0;
    int len = my_strlen(str) - 1;
    char *tmp = malloc(sizeof(char)*len);
    while (str[i] != ')')
        i++;
    my_putchar(len);
    for(;str[i] != len; i++) {
        tmp[j] = str[i];
        j++;
    }
    return tmp;
}
int calcul2(char const *str)
{
    int len = my_strlen(str) - 1;
    char * str2 = malloc(sizeof(char) * len);
    int add = 0;

    str2 = str_dont_want2(calcul(str));
    add = my_atoi2(str2);
    my_putchar(add);

    return add;
}
