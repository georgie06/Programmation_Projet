/*
** EPITECH PROJECT, 2021
** fonction my_putchar
** File description:
** day 7 piscine fonction pour lib
*/

#include<stdio.h>
#include<unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
