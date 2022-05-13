/*
** EPITECH PROJECT, 2021
** my_strcat
** File description:
** epitech
*/

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int j = 0;
    while (dest[i]!='\0') {
        i++;
    }
    for (; src[j]!='\0'; j++, i++) {
        dest[i] = src[j];
    }
    dest[i] = '\0';
    return dest;
}
