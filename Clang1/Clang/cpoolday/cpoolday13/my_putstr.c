/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** 
Write a function that displays, one-by-one, the characters of a string.
The address of the string’s first character will be found in the pointer passed as a parameter to the function, which must be prototyped as follows:
int my_putstr(char const *str);

*/
int my_putstr(char const *str)
{
    for(; *str!= '\0';str++) {
        my_putchar(*str);
    }
    return (0);
}
