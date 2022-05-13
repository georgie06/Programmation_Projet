/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** my swap
*/

/*Write a function that swaps the content of two integers, whose addresses are given as a parameter. It must be prototyped as follows:
void my_swap(int *a, int *b);
*/

void my_swap(int *a, int *b)
{
    int c = 0;
    c = *a;
    *a = *b;
    *b = c;
}
