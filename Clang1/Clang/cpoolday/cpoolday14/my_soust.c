/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** `
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "include/my.h"

char *stock3(char const *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int len = my_strlen(str);
    char *str1 = malloc(sizeof(char) * len - 1);

    while (str[k] != '-')
        k++;
    for (; str[i] != str[k] && str[i] != 'w'; i++) {
         str1[j] = str[i];
            j++;
    }
    return str1;
}
char *stock4(char const *str)
{
    int i = 0;
    int j = 0;
    int k;
    int len = my_strlen(str);
    int count = 0;
    char *str2 = malloc(sizeof(char) * len - 1);
    int len2 = my_strlen(stock3(str));

    k = len2;
    for(; str[k] != '\0'; k++) {
            str2[i] = str[k + 1];
            i++;
    }
    return str2;
}

int sous(char *s1, char *s2)
{
    int x = 0;

    if (my_atoi(s1) > 2147483647 || my_atoi(s2) > 2147483647)
        return 0;
    if (my_atoi(s1) < -2147483647 || my_atoi(s2) < -2147483647)
        return 0;
    if (my_atoi(s1) - my_atoi(s2) > 2147483647)
        return 0;
    if (my_atoi(s1) - my_atoi(s2) < -2147483647)
        return 0;
    return (my_atoi(s1) - my_atoi(s2));
}
