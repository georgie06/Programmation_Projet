/*
** EPITECH PROJECT, 2021
** MY_PUTCHAR
** File description:
** Write one characters
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
