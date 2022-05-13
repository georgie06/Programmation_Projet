
/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** str to word
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int antialpha(char str)
{
    int i = 0;
    if (str >= '0' && str <= '9')
        return 1;
    else if (str >= 'A' && str <= 'Z')
        return 1;
    else if (str >= 'a' && str <= 'z')
        return 1;
    else {
        return 0;
    }
}
int count(char *str)
{
    int a = 0;
    int b = 0;
    while (str[a] != '\0'){
        if (antialpha(str[a]) == 0 && antialpha(str[a + 1]) != 0){
            b++;
        }
        a++;
    }
    return b;
}
int len_word(char *str, int i)
{
    for (int i = 0;str[i] != '\0';i++) {
        if (antialpha(str[i]) != 0)
            return (i);
        i++;
    }
    return (i);
}

char *str_trap(char const *str)
{
    int row = 0;
    int i = 0;
    int count = 0;
    int n = 0;
    int len = my_strlen(str);
}
 
int main (void)
{
    char str[] = "Hello World";
    my_putstr(str_trap(str));
}
    
    
