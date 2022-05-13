/*
** EPITECH PROJECT, 2021
** epitech 
** File description:
** annexe infinadd
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "include/my.h"


char *my_itoa(long long int n)
{
    char *s = malloc( n * sizeof(char));
    int i = 0;
    int sign = 0;

    if ((sign = n) < 0)
        n = -n;

    do {
            s[i++] = (n % 10) + '0';
    } while((n = n / 10) > 0);

    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';

    return (my_revstr(s));
}
