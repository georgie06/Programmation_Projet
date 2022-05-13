/*
** EPITECH PROJECT, 2021
** MY_STR_ISPRINTABLE
** File description:
** Check if the characters is printable
*/

int my_str_isprintable(char const *str)
{
    int count = 0;

    if (str[0] == '\0') {
        return (0);
    }
    while (str[count] != '\0') {
        if ((str[count] >= '!' && str[count] <= '~') || str[count] == ' ') {
            count++;
        } else {
            return (0);
        }
    }
    return (1);
}
