/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** my compute power rec
*/
int my_compute_power_rec(int nb, int p)
{
    if (p == 0)
        return 1;
    if (p < 0)
        return 0;
    while ( nb != 0)
        return (nb * my_compute_power_rec(nb, p - 1));
                
}
    
