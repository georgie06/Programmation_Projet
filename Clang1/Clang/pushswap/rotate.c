/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** rotate
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "include/my.h"

void print(int *array,int size);

int *rotate(int *array,int size)
{
    char *msg = "ra ";
    int *str = malloc(sizeof(int)*size);
    int i;
    int j;

    str[size - 1] = array[0];
    for(i = 0; i < size - 1; i++){
        str[i] = array[i + 1];
    }
    write(1, msg, 3);
    return str;
}

void swap_elem1(int *arr,int index1,int index2)
{
    int tmp = 0;

    if ( arr[index1] > arr[index2]){
        tmp = arr[index1];
        arr[index1] = arr[index2];
        arr[index2] = tmp;
    }
}

void bubble1(int * array, int size)
{
    int i;
    int j;
    int count = 0; 

    for (i = 0; i < size; i++){                                                                                                                                                 
        for (j = 0; j <  size - i - 1; j++){
            if (array[j] > array[j + 1]){
                swap_elem1(array, j, j + 1);
                if (count)
                    write(1," ",1);
                else
                    count = 1;
                write(1,"sa",2);
                
            }
        }
    }
}

void pushswap(int * array, int size)
{
    int i = 0;
    int j = 0;
    
    if (array[i] > array[size - 1]){
        array = rotate(array, size);
        bubble1(array, size);
    }
    else {
        bubble1(array, size);
    }
    my_putstr("\n");

}
void pushswap2(int * array, int size)
{
    int i = 0;
    int j = 0;

    bubble1(array, size);
    my_putstr("\n");

}

int main (int ac, char **av)
{
    int len = ac - 1;
    int *tmp = malloc(sizeof(int) * len);
    int i = 1;
    int j = 0;

    for(i = 1; i < ac; i++){
        tmp[j] = my_atoi(av[i]);
        j++;
    }
    pushswap2(tmp, len);
    return 0;
}


