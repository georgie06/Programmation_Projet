/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** print alpha
*/
//Write a function that, beginning with a, displays the lowercase alphabet in ascending order, on a single line. It must be prototyped as follows:

int my_print_alpha(void)
{
    char c = 'r';
    int i = 145;
    for(;i < 171;i++) {
        c = i - '0';
        my_putchar(c);
    }
    return(i);
}
    
