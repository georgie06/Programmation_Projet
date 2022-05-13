/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** git@github.com:EpitechPromo2026/B-CPE-100-PAR-1-2-cpoolday05-georgie.mavambu.git
*/

int my_compute_factorial_it(int nb)
{
    int result = 1;
    int i = 0;
    if (nb > 11)
        return 0;
    if (nb == 0)
        return 1;
    if ( nb < 0)
        return 0;
    else {
        for(i = 1; i <= nb; i++)
            result = result * i;
        return result;
    }
    return 0;
}
