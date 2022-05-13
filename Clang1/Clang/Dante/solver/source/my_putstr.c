/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** my_putstr
*/

#include<unistd.h>

void my_putchar(char c);

int my_putstr(char const *str)
{
    int z;
    for (z = 0; str[z] != '\0'; z++)
        my_putchar(str[z]);
    return 0;
}
