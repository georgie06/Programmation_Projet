/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** my_print_digits
*/

/*#include <unistd.h>
void my_putchar(char c)
{
    write(1,&c,1);
    }*/
int my_print_digits(void)
{
    int i = 0;
    char c;
    for(;i <= 9;i++) {
        c = i + '0';
        my_putchar(c);
    }
}
    
