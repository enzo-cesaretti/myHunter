/*
** EPITECH PROJECT, 2022
** MY_PUTSTR
** File description:
** Print STR give as parameter.
*/

#include "lib.h"

void my_putstr(char const *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
}
