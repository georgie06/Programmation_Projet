/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** my is prime
*/

int my_is_prime(int nb)
{
    int i = 0;
    int p = 0;
    
    while ( i <= nb) {
        i++;
        if ( nb % i == 0) {
            p++;
        }
    }
    if (p == 2)
        return 1;
    else {
        return 0;
    }
}
