/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** my put nbr
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
    if (nb < 0){
        my_putchar('-');
        nb = -nb;
    }
    return (nb);
}
    
