/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** rush1-5
*/

<<<<<<< HEAD
int rush1_5 (int x,int y) {
=======
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
                    if ((i == 1 && j == 1) || (i == y && j == x)) {
                        my_putchar('A');
                    } else if ((i == 1 && j == x) || (i == y && j == 1)) {
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
}
