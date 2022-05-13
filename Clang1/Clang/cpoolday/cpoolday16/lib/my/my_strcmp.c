/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** strcmp
*/
int my_strlen(char const *str);
int compare_strlen(char const *s1, char const *s2);
#include <stdio.h>
#include <stdlib.h>
#include<string.h>



int my_strcmp(const char *x, const char *y) 
{
    for(;*x != '\0' && *y != '\0' && *x == *y;x++,y++);
    
    if (*x == *y) {
        return 0; // strings are identical
    }
    else {
        return *x - *y;
    }
}
int mystrncmp(const char *x, const char *y,int n) {
    for(;*x != n && *y != n && *x == *y;x++,y++);
    
    if (*x == *y) {
        return 0; // strings are identical
    }
    else {
        return *x - *y;
    }
}
