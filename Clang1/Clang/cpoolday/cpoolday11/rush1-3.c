/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** rush1-3
*/

int rush1_3 (int x,int y) {
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
                    if ((i == y) &&  ((j == 1) || (j == x))) {
                        my_putchar('C');
                    } else if ((i == 1) && ((j == 1) || (j == x))) {
                        my_putchar('A');
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
