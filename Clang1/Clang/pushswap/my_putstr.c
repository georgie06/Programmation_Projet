/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** 
Write a function that displays, one-by-one, the characters of a string.
The address of the string’s first character will be found in the pointer passed as a parameter to the function, which must be prototyped as follows:
*/

void my_putchar(char c);

int my_putstr(char const *str)
{
    int i = 0;
    for(; str[i] != '\0'; i++){
        my_putchar(str[i]);
    }
    return 0;
}
