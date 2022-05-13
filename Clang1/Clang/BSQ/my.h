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

int *rotate(int *array,int size);
void swap_elem1(int *arr,int index1,int index2);
void bubble(int * array, int size, int tmp);
void pushswap(int * array, int size);
long long int my_atoi(char const *str);
void my_putchar(char c);
int my_putstr(char const *str);
#endif /* MY_LIB_ */
