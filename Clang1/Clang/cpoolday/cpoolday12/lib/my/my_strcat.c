/*
** EPITECH PROJECT, 2021
** MY_STRCAT
** File description:
** Concatenates two strings
*/

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int len = my_strlen(dest);
    int count = 0;

    while (src[count] != '\0') {
        dest[len] = src[count];
        len++;
        count++;
    }
    return (dest);
}
