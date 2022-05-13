/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** print comb2
*/
#include <unistd.h>
int my_print_comb2(void)
{
    int a = 0;
    int b = 1;
    //while ( a <100 ){//&& b<99) {
    while ( a < b) {
        for(;a<=98;a++) {
            for(;b<=99;b++) {
                if(b<=9) {
                    my_putchar('0');
                    my_put_nbr(a);
                    my_putchar(' ');
                    my_putchar('0');
                    my_put_nbr(b);
                    my_putchar(',');
                    my_putchar(' ');
                }
                else {
                    b++;
                    b--;
                    my_putchar('0');
                    //my_putchar(' ');
                    my_put_nbr(a);
                    my_putchar(' ');
                    my_put_nbr(b);
                    my_putchar(',');
                }
//                my_putchar(' ');
            }
        }
    }
    return(0);
}


/*        a=10;
        b=0;
        for(;a<=98;a++){
            for(;b<=99;b++) {
                    my_put_nbr(a);
                    my_putchar(' ');
                    my_putchar('0');
                    my_put_nbr(b);
                    my_putchar(';');
                    my_putchar(' ');


    }
    }*/
