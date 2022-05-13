/*
** EPITECH PROJECT, 2021
** epitech 
** File description:
** rush1-2
*/

int rush1_2 (int x,int y) {                                                                                                                                                                 
    int i = 1;
    int j = 1;

    if (i >= y && x < 0 && y < 0)
        return 0;
    else {
        while ( (i <= y) && (x > 0) && (y > 0)) {
            while (j <= x) {
                if ((j == 1 && i == 1) || (j == x && i == y)){
                    my_putchar('/');
                } else if ((i == 1 && j == x) || (j == 1 && i == y)){
                    my_putchar('\\');
                }
                else {
                    if (i != 1 && i != y && j != 1 && j != x) {
                        my_putchar(' ');
                    } else {
                        my_putchar('*');
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

