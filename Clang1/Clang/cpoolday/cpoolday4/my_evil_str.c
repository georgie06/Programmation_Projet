/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** The goal of this task is to swap each of the string’s characters, two by two.
In other words, you will swap the first letter with the last one, the second with the second-to-last and so on.
The function should return a pointer to the first character of the reversed string:
char *my_evil_str(char *str);
*/
char *my_evil_str(char *str)
{
    int i = 0;
    char temp;  
    int n = my_strlen(str)-1;   

    while ( i < n){
         temp = str[i];  
         str[i] = str[n];
         str[n] = temp;
         i++;
         n--;
    }
    return (str);
}
