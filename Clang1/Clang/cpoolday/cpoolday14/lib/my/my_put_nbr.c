/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** print nbr
*/

void my_putchar(char c);
int my_put_nbr(int nb)
{
    int i;
    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    if (nb >= 10)
        my_put_nbr(nb / 10);
    i = (nb % 10) + 48;
    my_putchar(i);
}
