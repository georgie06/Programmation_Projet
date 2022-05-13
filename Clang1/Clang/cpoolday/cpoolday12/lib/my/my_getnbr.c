/*
** EPITECH PROJECT, 2021
** my_getnbr
** File description:
** Afficher un nombre
*/

int is_neg(char const *str, int count)
{
    int neg = 1;

    if (str[count - 1] == '-') {
        return (neg  * (-1));
    } else if (count > 10) {
        return (neg);
    }
}

int my_getnbr(char const *str)
{
    int count = 0;
    int neg = 1;
    int number = 0;

    while (str[count] != '\0') {
        if (str[count] >= '0' && str[count] <= '9') {
            neg = is_neg(str, count);
            number = ((number * 10) + (str[count] - 48));
        } else if (str[count - 1] >= '0' && str[count - 1] <= '9') {
            return (number / 10);
        }
        count++;
    }
    return ((number * neg) / 10);
}
