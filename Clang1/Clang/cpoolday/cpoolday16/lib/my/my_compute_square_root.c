/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** squre root
*/

int my_compute_square_root(int nb)
{
    int i = 1;
    int result = 0;
    
    for(; i != nb; i++) {
        result = i*i;
        if (result == nb)
            return (i);
    }
    return (0);
}
