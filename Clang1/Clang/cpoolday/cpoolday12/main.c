/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** main rush2
*/

#include "my.h"

void display(char **av, int nbr_occurence, int i);

int my_strlen2(char const *str);

int number_occurence(int ac, char **av);

int main(int ac, char **av)
{
    int count = 0;
    int error = 0;

    while (av[count] != 0) {
        if (av[count][0] >= '0' && av[count][0] <= '9') {
            return 84;
        }
        count++;
    }
    number_occurence(ac,av);
    return (0);
}
