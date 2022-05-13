/*
** EPITECH PROJECT, 2021
** strlen
** File description:
** number of caracter in the sring
*/

int my_strlen(char const *str)
{
    int i = 0;
    int count = 0;

    while (str[i] != '\0') {
        count++;
        i++;
    }
    return count;
}
