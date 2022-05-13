/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include "include/my.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int check_base(char *str)
{
    char *str1 = "0123456789";
    
    if (str1 == str)
        return 0;
    if (my_strlen(str) < 2)
        return 84;
}
int check_ops(char *str)
{
    char *str1 = "()+-*/%";
    char *str2 = "{}vwxyz";
    
    if (str == str1 || str == str2)
        return 0;
    if (my_strlen(str) != 7) {
        return 84;
    }
}
int help(char **av)
{
    if (av[1][0] == '-' && av[1][1] == 'h') {
        my_putstr("USAGE\n./calc base operators size_read\n\n"
                  "DESCRIPTION\n- base: all the symbols of the base"
                  "\n- operators: the symbols for the parentheses"
                  "and the 5 operators\n- size_read: number of "
                  "characters to be read\n" );
    }
    return 0;
}

int main(int ac, char **av)
{
    char buffer[1000];
    size_t count = 1000;
    int  tmp = 0;
    char *str1 = malloc(sizeof(char) * my_strlen(av[1]));
    char *str2 = malloc(sizeof(char) * my_strlen(av[2]));

    if (ac != 4)
        return (help(av));
    str1 = av[1];
    str2 = av[2];
    check_base(str1);
    check_ops(str2);
    tmp = read(0, buffer, count);
    buffer[tmp-1] = '\0';
    my_put_nbr(check_op(buffer));
    return(EXIT_SUCCESS);
}
