/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** evalexpert
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "include/my.h"
#include <string.h>

int convert(char *str);
int divsn(int x, int y);
int mod(int x, int y);
int multi(int x, int y);
int do_op(int x,int y, char const *str);
char *str_dont_want(char const *str);
int my_atoi2(char const *str);
char * dispatch(char const *str);
char * dispatch2(char const *str);
char *test2(char const *str);
char *add5(char const*str1,char const *str2);


int do_op (int x, int y,char const *str)
{
    while (*str != '\0') {
    if ( *str == '+')
        return x + y;
    if ( *str == '-')
        return x - y;
    if( *str == '*')
        multi(x,y);
    if (*str == '/')
        return divsn(x, y);
    if (*str == '%')
        mod(x, y);
    }
}

int my_atoi2(char const *str)
{
    long long int res = 0;
    long long int i = 0;
    
    for (; str[i] != '\0' ; i++) {
        res = res * 10 + str[i] - '0';
    }
    return res;
}

char *add5(char const*str1,char const *str2)
{
    long long int res = 0;
    long long int len = my_strlen(str1) + my_strlen(str2);
    char *result = NULL;
    
    result = malloc (len - 1 * sizeof(char));
    res = my_atoi2(str1) + my_atoi2(str2);
    return my_itoa(res);
    
}

char *test2(char const *str) {
    int i = 0;
    int len = my_strlen(str);
    char *tmp = malloc(len*sizeof(char));
    for (;str[i] != ')';i++) {
        tmp[i] = str[i];
    }
    return tmp;
}

char *str_dont_want(char const *str)
{
    int i = 0;
    int j = 0;
    int len = my_strlen(str)-1;
    char *tmp = malloc(len*sizeof(char));
    my_strcpy(tmp,&str[0]);
    return tmp;
}

char * dispatch(char const *str)
{
    int i = 0;
    char *tmp1 = malloc(sizeof(char)*3);
    char *tmp2 = malloc(sizeof(char)*3);
    char *tmp3 = malloc(my_strlen(str)*sizeof(char));
    char *tmp4 = malloc(sizeof(char)*3);
    my_strncpy(tmp1, &str[1],0);
    my_strncpy(tmp2,&str[3],1);
    my_strncpy(tmp4, &str[5],1);
    my_strcpy(tmp3,add5(tmp1,tmp2));
    my_strcpy(tmp3,add5(tmp3,tmp4));
    return tmp3;
}

char *result(char const *str1, char const *str2)
{
    int i = 0;
    str2 = test2(str1);
    str2 = my_atoi2(dispatch(str_dont_want(str2)));
    return my_itoa(str2);
}

int main(int ac , char **av)
{
    if (ac > 2)
        return 84;
    char const *tmp = malloc(sizeof(char)*my_strlen(av[1]));
    my_putstr(result(av[1],tmp));
    return 0;
}

    
    
