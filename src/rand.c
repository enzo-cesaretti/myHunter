/*
** EPITECH PROJECT, 2022
** RAN
** File description:
** Randomize the positon of the duck each time
*/

#include "my.h"

void randomize_duck(WManager_t *WManager)
{
    int rd_nbr = (rand() % (1000 - 0 + 1) + 0);
    change_coords(&WManager->duck_v, 0, rd_nbr);
}

void change_coords(sfVector2f *vector, float x, float y)
{
    vector->x = x;
    vector->y = y;
}
