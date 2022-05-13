/*
** EPITECH PROJECT, 2021
** atoi
** File description:
** convert int char
*/

long long int my_atoi(char const *str)
{
    int res = 0;
    
    for (int i = 0; str[i] != '\0'; i++)
        res = res * 10 + str[i] - '0';
    return res;
}
