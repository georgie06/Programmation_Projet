/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** test1
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "include/my.h"

char *stock1(char const *str)
{
    int i = 0;
    int j = 0;
    int k;
    int len = my_strlen(str);
    char *str1 = malloc(sizeof(char) * len - 1);

    for (k = 0; str[k] != '+' && str[k] != 'v'; k++);
    for (; str[i] != str[k]; i++) {
         str1[j] = str[i];
         j++;
    } 
    return str1;
}

char *stock2(char const *str)
{
    int i = 0;
    int j = 0;
    int k;
    int count = 0;
    int len = my_strlen(str);
    char *str2 = malloc(sizeof(char) * len - 1);
    int len2 = my_strlen(stock1(str));
    char tmp[10];

    k = len2;
    for(; str[k] != '\0'; k++) {
        str2[i] = str[k + 1];
        i++;
    }
    return str2;
}

int add(char *s1, char *s2)
{
    int x = 0;

    if (my_atoi(s1) > 2147483647 || my_atoi(s2) > 2147483647)
        return 0;
    if (my_atoi(s1) < -2147483647 || my_atoi(s2) < -2147483647)
        return 0;
    if (my_atoi(s1) + my_atoi(s2) > 2147483647)
        return 0;
    if (my_atoi(s1) + my_atoi(s2) < -2147483647)
        return 0;
    return my_atoi(s1) + my_atoi(s2);
}
