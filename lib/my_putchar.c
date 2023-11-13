/*
** EPITECH PROJECT, 2022
** MY_PUTCHAR
** File description:
** Print char
*/

#include "lib.h"
#include <unistd.h>

int my_putchar(char c)
{
    write(1, &c, 1);
    return 0;
}
