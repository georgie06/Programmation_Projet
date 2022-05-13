/*
** EPITECH PROJECT, 2021
** MY_STRLOWCASE
** File description:
** Put every letter of every word in it in lowercase
*/

char *my_strlowcase(char *str)
{
    int count = 0;

    while (str[count] != '\0') {
        if (str[count] >= 'A' && str[count] <= 'Z') {
            str[count] = str[count] + 32;
        }
        count++;
    }
    return (str);
}
