/*
** EPITECH PROJECT, 2021
** str_is_not_alphanum
** File description:
** check characters
*/

int str_is_not_alphanum(char const *str, int count)
{
    if ((str[count] >= ' ' && str[count] <= '/')
        || (str[count] >= ':' && str[count] <= '@')
        || (str[count] >= '[' && str[count] <= '`')
        || (str[count] >= '{' && str[count] <= '~')
        || (str[count] >= '0' && str[count] <= '9')) {
        return (1);

    } else {
        return (0);
    }
}
