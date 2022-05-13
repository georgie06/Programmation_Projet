/*
** EPITECH PROJECT, 2021
** MY_STR_ISNUM
** File description:
** Check if the strings have only digits
*/

int my_str_isnum(char const *str)
{
    int count = 0;

    if (str[0] == '\0') {
        return (0);
    }
    while (str[count] != '\0') {
        if ((str[count] >= '1' && str[count] <= '9') || str[count] == ' ') {
            count++;
        } else {
            return (0);
        }
    }
    return (1);
}
