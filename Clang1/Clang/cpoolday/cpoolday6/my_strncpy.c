/*
** EPITECH PROJECT, 2021
** epitech 
** File description:
** strncpy
*/
int my_strlen(char const *str);
char *my_strncpy(char *dest, char const *src, int n)
{
    int len = my_strlen(src);
    int i = 0;

    for(; i != n; i++)
        dest[i] = src[i];
    if( n > len)
        dest[len]='\0';
    return dest;
}
