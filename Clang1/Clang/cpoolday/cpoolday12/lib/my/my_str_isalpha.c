/*
** EPITECH PROJECT, 2021
** MY_STR_ISAPLPHA
** File description:
** Check if the string contains only alphabetical characters
*/

char *my_strlowcase(char const *str);

int my_str_isalpha(char const *str)
{
    int count = 0;

    if (str[0] == '\0') {
        return (0);
    }
    my_strlowcase(str);
    while (str[count] != '\0') {
        if ((str[count] >= 'a' && str[count] <= 'z') || str[count] == ' ') {
            count++;
        } else {
            return (0);
        }
    }
    return (1);
}
