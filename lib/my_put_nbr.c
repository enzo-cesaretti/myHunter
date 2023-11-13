/*
** EPITECH PROJECT, 2022
** MY_PUT_NBR
** File description:
** Print a number
*/

#include "lib.h"

void my_put_nbr(int nb)
{
    if (nb >= 0 && nb < 10) my_putchar(nb + '0');
    else if (nb < 0) {
        my_putchar('-');
        my_put_nbr(nb * (-1));
    } else {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
}

void my_put_u_int(unsigned int nb)
{
    if (nb < 10)
        my_putchar(nb + '0');
    else {
        my_put_u_int(nb / 10);
        my_put_u_int(nb % 10);
    }
}

void my_put_lu_int(long unsigned int nb)
{
    if (nb < 10)
        my_putchar(nb + '0');
    else {
        my_put_u_int(nb / 10);
        my_put_u_int(nb % 10);
    }
}

void my_put_l_int(long int nb)
{
    if (nb >= 0 && nb < 10)
        my_putchar(nb + '0');
    else {
        my_put_u_int(nb / 10);
        my_put_u_int(nb % 10);
    }
}
