/*
** EPITECH PROJECT, 2021
** MY_COMPUTE_REC
** File description:
** Puissance rec
*/

int my_compute_power_rec(int nb, int p)
{
    int res = 1;

    if (p == 0) {
        return (1);
    }
    if (p < 0) {
        return (0);
    }
    res = nb * my_compute_power_rec(nb, p - 1);
    return (res);
}
