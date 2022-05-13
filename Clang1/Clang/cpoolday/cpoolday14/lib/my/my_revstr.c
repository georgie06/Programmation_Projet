/*
** EPITECH PROJECT, 2021
** my_revstr
** File description:
** reverse string
*/

int my_strlen(char const *str);
char *my_revstr(char *str)
{
    int i;
    char dest;
    int length = my_strlen(str) - 1;

    for (i = 0; i < length; i++, length--) {
        dest = str[i];
        str[i] = str[length];
        str[length] = dest;
    }
    return str;
}
