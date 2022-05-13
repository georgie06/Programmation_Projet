/*
** EPITECH PROJECT, 2020
** strdup
** File description:
** 
*/
int my_strlen(char const *s);
char *strdup(char const *s)
{
    int len = my_strlen(s);
    char *dest = malloc(sizeof(char) *len + 1);

    for(int i = 0; s[i] != '\0'; i++) {
        dest[i] = s[i];
    } 
    return(dest);
}
