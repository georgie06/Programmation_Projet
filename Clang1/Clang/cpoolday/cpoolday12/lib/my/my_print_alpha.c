/*
** EPITECH PROJECT, 2021
** my_print_alpha
** File description:
** List of alphabet
*/

void my_putchar(char c);

int my_print_alpha(void)
{
    int ascii;
    int last_letter;

    ascii = 97;
    last_letter = 123;

    while (ascii != last_letter) {
        my_putchar(ascii);
        ascii = ascii + 1;
    }
    return (0);
}
