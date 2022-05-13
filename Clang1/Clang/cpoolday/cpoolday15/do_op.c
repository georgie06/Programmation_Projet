/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** do op
*/
#include <stdio.h>
int convert(char *str);
int div(int x, int y);
int mod(int x, int y);
int multi(int x, int y);
int do_op (int ac, char **av)
{
    int x, y;
    if ( ac > 4 || ac < 4)
        return 84;
    
    x = convert(av[1]);
    y = convert(av[3]);
    if ( av[2][0]== '+')
        return x + y;
    if ( av[2][0] == '-')
        return x - y;
    if( av[2][0] == '*')
        multi(x,y);
    if (av[2][0] == '/')
        return div(x, y);
    if (av[2][0] == '%')
        mod(x, y);
} 
int multi(int x, int y)
{
    int res = x;
    res = res * y;
    return res;
}
int div(int x, int y)
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
int main (int ac, char **av)
{
    my_put_nbr(do_op(ac,av));
    return 0;
}
        
