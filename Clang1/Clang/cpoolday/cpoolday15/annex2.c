/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** annex2
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int multi(int x, int y)
{
    int res = x;

    res = res * y;
    return res;
}
int divsn(int x, int y)
{
    int res = 0;

    if ( y == 0)
	return 84;
    res = x / y;
    return res;
}

int mod(int x, int y)
{
    int res = 0;

    if (y == 0)
        return 84;
    res = x % y;
    return res;
}

int convert(char *str)
{
    int res = 0;

    for (int i = 0; str[i] != '\0'; i++) {
	res = res * 10 + str[i] - '0';
    }
    return res;
}

