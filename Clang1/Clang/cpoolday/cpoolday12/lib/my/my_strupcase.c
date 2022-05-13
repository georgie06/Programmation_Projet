/*
** EPITECH PROJECT, 2021
** MY_STRUPCASE
** File description:
** Put every letter of every word in it in uppercase
*/

char *my_strupcase(char *str)
{
    int count = 0;

    while (str[count] != '\0') {
        if (str[count] >= 'a' && str[count] <= 'z') {
            str[count] = str[count] - 32;
        }
        count++;
    }
    return (str);
}
