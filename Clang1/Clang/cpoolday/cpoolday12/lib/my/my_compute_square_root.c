/*
** EPITECH PROJECT, 2021
** MY_COMPUTE_SQUARE_ROOT
** File description:
** calcul racine
*/

int my_compute_square_root(int nb)
{
    int res = 0;

    if (nb == 0) {
        return (0);
    }
    while ((res * res) < nb) {
        res++;
    }
    if ((res * res) == nb) {
        return (res);
    } else {
        return (0);
    }
}
