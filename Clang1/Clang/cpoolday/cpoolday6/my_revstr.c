/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** revstr
*/
int my_strlen(char const *str);

char *my_revstr(char *str)
{
    int j;
    int i;
    int len = my_strlen(str)-1;
    for(i = 0; i <= len; i++) {
        j = str[len];
        str[len] = str[i];
        str[i] = j;
        len--;
    }
    return str;
}
    
