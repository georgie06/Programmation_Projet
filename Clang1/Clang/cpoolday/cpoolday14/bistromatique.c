/*
** EPITECH PROJECT, 2021
** bistro
** File description:
** bistro
*/

#include "include/my.h"
#include <stdio.h>

int check_op(char *str)
{
    int i = 0;
    int result = 0;

    while (str[i] != '\0') {
        if (str[i] == '+' || str[i] == 'v')
            result += add(stock1(str), stock2(str));
        if (str[i] == '-' || str[i] == 'w')
            result += sous(stock3(str), stock4(str));
        if (str[i] == '*' || str[i] == 'x')
            result += multiplication(stock5(str), stock6(str));
        if (str[i] == '/' || str[i] == 'y')
            result += my_division(stock7(str), stock8(str));
        if (str[i] == '%' || str[i] == 'z')
            result += my_modulo(stock9(str), stock10(str));
        i++;
    }
    return result;
}
     
