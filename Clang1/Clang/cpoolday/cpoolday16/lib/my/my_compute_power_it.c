/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** Write an iterative function that returns the first argument raised to the power p, where p is the second argument.
It must be prototyped the following way:
int my_compute_power_it(int nb, int p);
*/
int my_compute_power_it(int nb, int p)
{
    int result = 1;

    if ( p == 0)
        return 1;
    if (p < 0)
        return 0;
    for (; p != 0;p--)
        result = result * nb;
    return (result);
}
    
        
