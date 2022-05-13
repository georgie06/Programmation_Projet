/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** concate params
*/
#include <stdlib.h>
#include <stdio.h>

int my_putstr(char const *str);

char *concat_params(int ac, char **av)
{
    int i = 0;
    for(;i < ac;i++) {
        my_putstr(av[i]);
    }
    return NULL;
}
        
