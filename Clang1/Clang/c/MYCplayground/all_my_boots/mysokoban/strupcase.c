/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** strupcase
*/

char *my_strupcase(char *str)
{
    int count = 0;
    while(str[count] != '\0') {
        if(str[count] >= 'a' && str[count] <= 'z') {
            str[count] = str[count] - 32;
        }
        count++;
    }
    return (str);
}

char *my_strupcase2(char *str)
{
    int count = 0;

    while(str[count] != '\0') {
        if(str[count] >= 'A' && str[count] <= 'Z') {
            str[count] = str[count] + 32;
        }
        count++;
    }
    return (str);
}
