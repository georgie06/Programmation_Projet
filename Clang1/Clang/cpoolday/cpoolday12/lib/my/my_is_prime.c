/*
** EPITECH PROJECT, 2021
** MY_IS_PRIME
** File description:
** Prime numbers
*/

int my_is_prime(int nb)
{
    int count = 2;

    while (count < nb && nb % count == 0) {
        count++;
    }
    if (count == nb) {
        return (1);
    } else {
        return (2);
    }
}
