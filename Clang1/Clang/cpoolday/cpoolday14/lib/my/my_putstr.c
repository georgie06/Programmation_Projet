/*
** EPITECH PROJECT, 2021
** putstr
** File description:
** print string
*/

void my_putchar(char c);
int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}
