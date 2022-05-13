/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** revalpha
*/
/*#include <unistd.h>
void my_putchar(char c) {
    write(1,&c,1);
}*/
int my_print_revalpha(void)
{
    int i = 'z';
    my_putchar('z');
    while (i != 97) {
        i--;
        my_putchar(i);
    }
    return(0);
}
