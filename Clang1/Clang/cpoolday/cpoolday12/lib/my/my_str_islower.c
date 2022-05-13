/*
** EPITECH PROJECT, 2021
** MY_STR_ISLOWER
** File description:
** Check if string have only lowercase alphabetical caracters
*/

int my_str_islower(char const *str)
{
    int count = 0;

    if (str[0] == '\0') {
        return (0);
    }
    while (str[count] != '\0') {
        if ((str[count] >= 'a' && str[count] <= 'z') || str[count] == ' ') {
            count++;
        } else {
            return (0);
        }
    }
    return (1);
}
