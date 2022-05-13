/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** my strcpy
*/
int my_strlen(char const *str);

char *my_strcpy(char *dest, char const *src)
{
    int len = my_strlen(src);
    int i = 0;

    for(; i != len; i++) {
        dest[i] = src[i];
    }
    return dest;
}
