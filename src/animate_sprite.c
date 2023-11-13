/*
** EPITECH PROJECT, 2022
** ANIMATE_SPRITE
** File description:
** Anime all sprite in the game
*/

#include "my.h"

void animate_sprite(sfSprite *sprite, sfIntRect *rect, sfClock *clock)
{
    if (sfClock_getElapsedTime(clock).microseconds > (0.25) * 1000000) {
        rect->left += 110;
        if (rect->left >= 330)
            rect->left = 0;
        sfClock_restart(clock);
        sfSprite_setTextureRect(sprite, *rect);
    }
}
