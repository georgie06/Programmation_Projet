/*
** EPITECH PROJECT, 2021
** mult
** File description:
** multiplication
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "include/my.h"

char *stock5(char const *str)
{
    char *str1 = malloc(sizeof(char) * my_strlen(str) - 1);
    int i = 0;
    int j = 0;
    int k;
    int len = my_strlen(str);

    for (k = 0; str[k] != '*' && str[k] != 'x'; k++);

    for (; str[i] != str[k]; i++) {
         str1[j] = str[i];
            j++;
    }
    return str1;
}

char *stock6(char const *str)
{
    char *str2 = malloc(sizeof(char) * my_strlen(str) - 1);
    int i = 0;
    int j = 0;
    int k;
    int len = my_strlen(str);
    int len2 = my_strlen(stock5(str));

    k = len2;
    for(; str[k] != str[len]; k++) {
            str2[i] = str[k + 1];
            i++;
    }
    return str2;
}

int multiplication(char *s1, char *s2)
{
    int x = 0;

    if (my_atoi(s1) > 2147483647 || my_atoi(s2) > 2147483647)
        return 0;
    if (my_atoi(s1) < -2147483647 || my_atoi(s2) < -2147483647)
        return 0;
    if (my_atoi(s1) * my_atoi(s2) > 2147483647)
        return 0;
    if (my_atoi(s1) * my_atoi(s2) < -2147483647)
        return 0;
    return (my_atoi(s1) * my_atoi(s2));
}
