/*
** EPITECH PROJECT, 2021
** MY_STR_ISUPPER
** File description:
** Check if the string have only uppercase alphabetical characters
*/

int my_str_isupper(char const *str)
{
    int count = 0;

    if (str[0] == '\0') {
        return (0);
    }
    while (str[count] != '\0') {
        if ((str[count] >= 'A' && str[count] <= 'Z') || str[count] == ' ') {
            count++;
        } else {
            return (0);
        }
    }
    return (1);
}
