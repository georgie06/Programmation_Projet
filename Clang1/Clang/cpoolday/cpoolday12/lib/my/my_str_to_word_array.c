/*
** EPITECH PROJECT, 2021
** my_str_to_word_array
** File description:
** splits string into words
*/

#include <stdlib.h>

int my_strlen(char const *str);

int str_is_not_alphanum(char const *str, int count);

int nbr_word(char const *str)
{
    int count = 0;
    int nbr = 0;

    while (count < my_strlen(str)) {
        if (str_is_not_alphanum(str,count) == 1) {
            nbr++;
        }
        count++;
    }
    return ((nbr + 1));
}

int len_word(char const *str, int nbr)
{
    int count = 0;
    int i = 0;
    int len = 0;

    while (str[count] != '\0' && i < (nbr + 1)) {
        if (str_is_not_alphanum(str, count) == 1) {
            i++;
        }
        if (i == nbr) {
            len++;
        }
        count++;
    }
    return (len);
}

int not_alphanum_del(char const *str, int count)
{
    int nbr = 1;

    while ((str[count] >= ' ' && str[count] <= '/')
        || (str[count] >= ':' && str[count] <= '@')
        || (str[count] >= '[' && str[count] <= '`')
        || (str[count] >= '{' && str[count] <= '~')) {
        count++;
        nbr++;
    }
    return (nbr);
}

char **my_str_to_word_array(char const *str)
{
    int count = 0;
    int i = 0;
    int j = 0;
    char **dest = malloc(sizeof(char*) * (nbr_word(str) + 1));

    for ( ; i < nbr_word(str); i++)
        dest[i] = malloc(sizeof(char) * (len_word(str,i) + 1));
    i = 0;
    while (str[count] != '\0') {
        if (not_alphanum_del(str,count) > 1) {
            i++;
            j = 0;
            count += (not_alphanum_del(str,count) - 1);
        }
        dest[i][j] = str[count];
        j++;
        count++;
    }
    dest[nbr_word(str)] = NULL;
    return (dest);
}
