/*
** EPITECH PROJECT, 2021
** MY_STRNCPY
** File description:
** Copies n characters from a string to another
*/

int my_strlen(char const *str);

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    int len = my_strlen(src);

    while (i != n && src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    if (n > len) {
        dest[i] = '\0';
    }
    return (dest);
}
