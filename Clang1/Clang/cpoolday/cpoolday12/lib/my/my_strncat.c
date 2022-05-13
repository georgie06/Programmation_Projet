/*
** EPITECH PROJECT, 2021
** MY_STRNCAT
** File description:
** Concatenates n charaters
*/

int my_strlen(char const *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    int len = my_strlen(dest);
    int count = 0;

    while (src[count] != '\0' && (nb - 1) >= 0) {
        dest[len] = src[count];
        len++;
        count++;
        nb--;
    }
    dest[len] = '\0';
    return (dest);
}
