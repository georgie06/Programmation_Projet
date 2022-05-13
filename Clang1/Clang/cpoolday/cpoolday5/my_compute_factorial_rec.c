/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** epitech
*/

int my_compute_factorial_rec(int nb)
{
    if (nb > 11)
        return 0;
    if (nb == 0) {
        return (1);
    }
    if (nb < 0)
        return (0);
    while (nb != 0) {
        return (nb * my_compute_factorial_rec(nb - 1));
    }
    return 0;
}

