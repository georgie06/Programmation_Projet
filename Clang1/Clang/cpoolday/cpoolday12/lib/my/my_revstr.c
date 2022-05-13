/*
** EPITECH PROJECT, 2021
** MY_REVSTR
** File description:
** Reverse string
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    int len = my_strlen(str) - 1;
    int count = 0;
    char temp = 0;

    while (count < len) {
        temp = str[len];
        str[len] = str[count];
        str[count] = temp;
        len--;
        count++;
    }
    return (str);
}
