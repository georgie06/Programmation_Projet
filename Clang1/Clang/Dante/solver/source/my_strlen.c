/*
** EPITECH PROJECT, 2021
** my_strlen
** File description:
** my_strlen
*/

#include<unistd.h>
#include<stdio.h>

int my_strlen(char const *str)
{
    int a = 0;
    while (str[a] != '\0'){
        a++;
    }
    return(a);
}
