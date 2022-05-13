/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** rush1-4
*/
<<<<<<< HEAD
#include <unistd.h>
void my_putchar(char c){
    write(1, &c, 1);
}
int rush1_4 (int x,int y) {
=======
void my_putchar(char c){
    write(1, &c, 1);
}
int rush (int x,int y) {
>>>>>>> 565ac6fac17146e73ede787750995cba9eaafd18
    //char str[];                                                                                                                                                                 
    int i = 1;
    int j = 1;

    if (i >= y && x < 0 && y < 0)
        return 0;
    else {
        while ( (i <= y) && (x > 0) && (y > 0)) {
            while (j <= x) {
                if ((x == 1) || (y == 1)) {
                    my_putchar('B');
                } else if ((i < y) && (i > 1) && (j < x) && (j > 1)) {
                    my_putchar(' ');
                }
                else {
                    if ((i == 1 || i == y) && (j == 1)) {
                        my_putchar('A');
                    } else if ((i == 1 || i == y) && (j == x)) {
                        my_putchar('C');
                    } else {
                        my_putchar('B');
                    }
                }
                j++;
            }
            my_putchar('\n');
            j = 1;
            i += 1;
        }
    }
<<<<<<< HEAD
}
int main (void)                                                                                                                                                                   
{                                                                                                                                                                                 
    int x =5;                                                                                                                                                                     
    int y=3;                                                                                                                                                                      
    rush(x,y);                                                                                                                                                                    
}  
=======
}                                                                                                                                                                                
                                                                                                                                                                     
                                                                                                                                                           
>>>>>>> 565ac6fac17146e73ede787750995cba9eaafd18
