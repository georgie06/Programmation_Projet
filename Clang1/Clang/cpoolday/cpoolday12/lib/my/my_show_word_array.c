/*
** EPITECH PROJECT, 2021
** my_show_word_array
** File description:
** Display content of array
*/

void my_putchar(char c);

int my_putstr(char const *str);

int my_show_word_array(char * const *tab)
{
    int count = 0;

    while (tab[count] != 0) {
        my_putstr(tab[count]);
        my_putchar('\n');
        count++;
    }
    return (0);
}
