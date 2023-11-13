/*
** EPITECH PROJECT, 2022
** MOVE_SPRITE
** File description:
** Move all sprite
*/

#include "my.h"

void move_duck(WManager_t *WManager)
{
    float t_cl = 0.000001 * 1000000;
    sfTime clock_time = sfClock_getElapsedTime(WManager->cl_move_duck->clock);
    if (clock_time.microseconds > t_cl) {
        if (WManager->duck_v.x >= 1920) {
            WManager->duck_v.x = -22;
            randomize_duck(WManager);
        }
        WManager->duck_v.x += 15;
        sfClock_restart(WManager->cl_move_duck->clock);
    }
    sfSprite_setPosition(WManager->duck->sprite, WManager->duck_v);
}
