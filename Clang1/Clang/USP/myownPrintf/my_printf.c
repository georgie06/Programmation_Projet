/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** my_printf function
*/

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int my_strlen(char const *str);
void my_putchar(char c);
int my_put_nbr(int nb);
char *my_strupcase(char *str);
char *my_strupcase2(char *str);
int my_putstr(char const *str);

char *conversion(unsigned int num, int base)
{
    static char Representation[]= "0123456789ABCDEF";
    static char buffer[50];
    char *ptr;

    ptr = &buffer[49];
    *ptr = '\0';
    do {
        *--ptr = Representation[num%base];
        num /= base;
    } while(num != 0);
    return(ptr);
}

int my_printf(const char *format,...)
{
    va_list arg;
    int len = my_strlen(format),j = 0;
    char const *str = malloc(sizeof(char)*len);
    char  *str2 = malloc(sizeof(char)*len);
    
    va_start(arg,format);
    str = format;
    while (str[j] != '\0'){
        if (str[j] != '%'){
            my_putchar(str[j]);
        }
        if (str[j] == '%') {
            j++;
            switch (str[j]){
            case 'c':
                my_putchar((char)va_arg(arg, int));
                break;
            case 'i' :
                my_put_nbr(va_arg(arg, int));
               break;
            case 'd':
                my_put_nbr(va_arg(arg, int));
                break;

            case 'l':
                j++;
                if (str[j] == 'd')
                    my_put_nbr(va_arg(arg, long int));
                break;
            case 'x':
                str2 = conversion(va_arg(arg,unsigned int),16);
                my_putstr(my_strupcase2(str2));
                break;
            case 's':
                my_putstr(va_arg(arg, char*));
                break;
            case 'o':
                my_putstr(conversion(va_arg(arg,unsigned int),8));
                break;
            case '%':
                my_putchar('%');
                break;
            case 'X':
                str2 = conversion(va_arg(arg,unsigned int),16);
                my_putstr(my_strupcase(str2));
                break;
            case 'S':
                my_putstr(va_arg(arg, char*));
                break;
            case 'b' :
                my_putstr(conversion(va_arg(arg,unsigned int),2));
            }
        }
         if (str[j] != '\0')
             j++;
    }
    va_end(arg);
    return 0;
}
