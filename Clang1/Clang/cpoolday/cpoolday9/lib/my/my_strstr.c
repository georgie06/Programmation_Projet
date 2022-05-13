/*
** EPITECH PROJECT, 2020 
** 
** File description:
** 
*/
#include <stddef.h>

char *compare(char *str,char const*to_find)
{
    while (*str != NULL && *to_find != NULL) {

        if (*str == *to_find) {
            str++;
            to_find++;
        }
        else {
            return 0;
        }
    }
    
    return *to_find == '\0';
}

char *my_strstr(char *str, char const *to_find)
{

    while (*str!= '\0'){
        if (*str == *to_find && compare(str,to_find))
            return str;
        }
    str++;
    return NULL;
}
