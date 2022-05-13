/*
** EPITECH PROJECT, 2020
** 
** File description:
** 
*/

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int len = my_strlen(dest);
    int i = 0;
    
    for(; src[i]; dest[len + i] = src[i = i + 1]) {
        dest[len + i] ='\0';
    }
    return(dest);
}
