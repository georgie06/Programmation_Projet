/*
** EPITECH PROJECT, 2021
** MY_SWAP
** File description:
** Inverse two value
*/

void my_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}
