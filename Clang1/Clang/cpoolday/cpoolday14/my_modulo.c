/*
** EPITECH PROJECT, 2021
** modulo
** File description:
** modulo
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "include/my.h"

char *stock9(char const *str)
{
    int i = 0;
    int j = 0;
    int k;
    int len = my_strlen(str);
    char *str1 = malloc(sizeof(char) * len - 1);

    for (k = 0; str[k] != '%' && str[k] != 'z'; k++);
    for (; str[i] != str[k]; i++) {
         str1[j] = str[i];
            j++;
    }
    return str1;
}

char *stock10(char const *str)
{
    int i = 0;
    int j = 0;
    int k;
    int len = my_strlen(str);
    char *str2 = malloc(sizeof(char) * len - 1);
    int len2 = my_strlen(stock9(str));

    k = len2;
    for(; str[k] != '\0'; k++) {
        str2[i] = str[k + 1];
        i++;
    }
    return str2;
}

int my_modulo(char *s1, char *s2)
{
    int x = 0;

    if (my_atoi(s1) > 2147483647 || my_atoi(s2) > 2147483647)
        return 0;
    if (my_atoi(s1) < -2147483647 || my_atoi(s2) < -2147483647)
        return 0;
    if (my_atoi(s1) % my_atoi(s2) > 2147483647)
        return 0;
    if (my_atoi(s1) % my_atoi(s2) < -2147483647)
        return 0;
    return (my_atoi(s1) % my_atoi(s2));
}
