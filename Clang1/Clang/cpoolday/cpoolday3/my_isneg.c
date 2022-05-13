/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** my isneg
*/
/*#include <unistd.h>
void my_putchar(char c)
{
    write(1,&c,1);
    }*/
int my_isneg(int n)
{
    if ( n >= 0) {
        my_putchar('P');
    }
    else {
        my_putchar('N');
    }
    return 0;
}
        
