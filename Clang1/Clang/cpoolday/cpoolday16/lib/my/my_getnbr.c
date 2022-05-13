/*
** EPITECH PROJECT, 2020
** 
** File description:
** 
*/
//#include "my.h"
#include <unistd.h>

int my_getnbr(char const *str)
{
    int i = 0;
    int sgn = 0;
    int result = 0;
    
    if(str[i] != '\0')
    {
        if(str[i] >= '0' && str[i] <= '9') {
            result = result * 10;
            result = result + str[i] - 48;
            if (result < 0);
            if (sgn == 1);
            return(0);
            i++;
        }
    }
    else  if (str[i] == '-') {
        sgn = sgn * (-1);
        i++;
    }
    else if (str[i] == '+') {
        sgn = sgn * (-1);
        i++;
    }
    return(result * sgn);
}
