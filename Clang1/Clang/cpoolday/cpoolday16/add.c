/*
65;6003;1c** EPITECH PROJECT, 2021
** epitech
** File description:
** addition
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#define itc(x) (x - '0')
#define cti(x) (x + '0')
#include "include/my.h"
#include <string.h>

char *add2(char const *s1, char const *s2);
long long int my_atoi(char const *str);
char *my_itoa(long long int n);
char *add3(long long int x,long long int y,int len);


char *infin_add(char const *str1, char const *str2)
{
    char *result = NULL;
    long long int res = 0;
    long long int n = my_strlen(str1);
    long long int m = my_strlen(str2);
    long long int len = n + m;
    long long int  x = my_atoi(str1);
    long long int y = my_atoi(str2);

    if (*str1 == '-' && *str2 == '-'){
        str1++;
        str2++;
        x = *str1 - '0';
        y = *str2 - '0';
        result = add3(x, y, len);
        my_putchar('-');
        my_putstr(result);
        return result;
    }
    else {
        if ( n >= 2 || m >= 2) {
            result = malloc(len - 1 * sizeof(char));
            result = add2(str1, str2);
            my_putstr(result);
            return result;
        }
        else {
            result = malloc(2 * sizeof(char));
            res = *str1 - '0' + *str2 - '0';
            result = my_itoa(res);
            my_putstr(result);
            return result;
        }
    }
}

char *add2(char const*str1,char const *str2)
{
    long long int res = 0;
    long long int len = my_strlen(str1) + my_strlen(str2);
    char *result = NULL;
    
    result = malloc (len - 1 * sizeof(char));
    res = my_atoi(str1) + my_atoi(str2);
    result = my_itoa(res);
    return result;
}

char *add3(long long int x, long long int y, int len)
{
    long long int res = 0;
    char *result = NULL;

    result = malloc (len - 1 * sizeof(char));
    res = x + y;
    result = my_itoa(res);
    return result;
}

long long int my_atoi(char const *str)
{
    long long int res = 0;
    long long int i = 0;
    
    for (; str[i] != '\0' ; i++) {
        res = res * 10 + str[i] - '0';
    }
    return res;
}
