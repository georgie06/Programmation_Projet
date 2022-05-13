/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** Display number in character string
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    if (nb >= 10) {
        my_put_nbr(nb / 10);
        my_putchar(nb % 10 + '0');
    }
    if (nb < 10) {
        my_putchar(nb + '0');
    }
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    return (nb);
}
