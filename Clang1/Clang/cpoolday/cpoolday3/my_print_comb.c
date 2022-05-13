/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** print comb
*/
#include <unistd.h>

#include<stdio.h>
/*void my_putchar(char c)
{
    write(1,&c,1);
    }*/
int my_print_comb(void) {
    int i;
    int j;
    int k;
    char c = ',';
    char d = ' ';
    char c1,c2,c3;
    //while ( i<j<k) {
    
        for(i=0; i<=7; i++) {
            for(j = i+1;j<=8; j++) {
                for(k = j+1; k <=9; k++) {
                    c1 = i +'0';
                    c2 = j +'0';
                    c3 = k +'0';
                    
                    my_putchar(c1);
                    my_putchar(c2);
                    my_putchar(c3);
                    my_putchar(c);
                    my_putchar(d);
                }
            }
        }
        return 0;
}
