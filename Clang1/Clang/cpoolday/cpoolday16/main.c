/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** main infinadd
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (int ac , char **av)
{
    char const *s1 = av[1];
    char const *s2 = av[2];

    if ( ac > 3) {
        return 84;
    }
    infin_add(s1, s2);
    return 0;
}
