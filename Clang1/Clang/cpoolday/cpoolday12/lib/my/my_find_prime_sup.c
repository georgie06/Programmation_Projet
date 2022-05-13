/*
** EPITECH PROJECT, 2021
** MY_PRIME_FIND_SUP
** File description:
** Trouver le plus petit premier d'un nombre
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    int count = 0;

    while (my_is_prime((nb + count)) == 0) {
        count++;
    }
    return (nb + count);
}
