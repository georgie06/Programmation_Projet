/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** rush2
*/

#include "include/my.h"
#include <stdlib.h>
#include <stdio.h>

void display(char **av, int nbr_occurence,int i)
{
    my_putchar(av[i][0]);
    my_putchar(':');
    my_put_nbr(nbr_occurence);
    my_putchar(' ');
    my_putchar('(');
}

int my_strlen2(char const *str)
{
    int i = 0;
    int count = 0;

    while (i != my_strlen(str)) {
        if (str_is_not_alphanum(str,i) != 1) {
            count++;
        }
        i++;
    }
    return (count);
}

int calcul(int nbr_occurence, int len)
{
    int nbr = nbr_occurence * 10000;
    int nbr2 = 0;

    nbr2 = nbr / len;
    nbr2 = nbr2 - (nbr_occurence * 100 / len * 100);
    my_put_nbr(nbr_occurence * 100 / len);
    my_putchar('.');
    my_put_nbr(nbr2);
    my_putchar('%');
    my_putchar(')');
    my_putchar('\n');

    return (nbr);
}

int boucle(char **av, int i)
{
    int count = 0;
    int nbr_occurence = 0;

    while (av[1][count] != 0){
        if (av[1][count] == av[i][0] || av[1][count] - 32 == av[i][0]){
            nbr_occurence++;
        }
        count++;
    }
    return (nbr_occurence);
}

int number_occurence(int ac, char **av)
{
    int i = 2;

    if (ac == 1 || ac < 3) {
        return (84);
    }
    my_strlowcase(av[1]);
    for(i = 2; i != ac; i++) {
        display(av,boucle(av,i),i);
        calcul(boucle(av,i),my_strlen2(av[1]));
    }
    return (0);
}
