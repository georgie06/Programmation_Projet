/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** prototype function lib
*/

#ifndef MY_LIB_
#define MY_LIB_

#define ITOC(x) (x + 48)
#define CTOI(x) (x - 48)

void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
int add(char *s1, char *s2);
int sous(char *str, char *str2);
int multiplication(char *str, char *str2);
int my_division(char *str, char *str2);
int my_modulo(char *str, char *str2);
long long int my_atoi(char const *str);
char *my_revstr(char *str);
char *my_strcat(char *dest, char const *str);
int check_op(char *str);
char *stock1(char const *str);
char *stock2(char const *str);
char *stock3(char const *str);
char *stock4(char const *str);
char *stock5(char const *str);
char *stock6(char const *str);
char *stock7(char const *str);
char *stock8(char const *str);
char *stock9(char const *str);
char *stock10(char const *str);

#endif /* MY_LIB_ */
