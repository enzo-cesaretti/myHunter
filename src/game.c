/*
** EPITECH PROJECT, 2022
** GAME
** File description:
** game loop
*/

#include "my.h"

int hit_duck(WManager_t *WManager)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        sfVector2i mos_pos = sfMouse_getPositionRenderWindow(WManager->window);
        if (mos_pos.x > WManager->duck_v.x &&
            mos_pos.x < WManager->duck_v.x + 110
            && mos_pos.y > WManager->duck_v.y &&
            mos_pos.y < WManager->duck_v.y + 110) {
            WManager->score += 1;
            WManager->duck_v.x = -22;
            randomize_duck(WManager);
        }
    }
    return 1;
}

void game_loop(WManager_t *WManager)
{
    while (sfRenderWindow_isOpen(WManager->window)) {
        event_handler(WManager->window);
        hit_duck(WManager);
        sfRenderWindow_clear(WManager->window, sfBlack);
        sfRenderWindow_drawSprite(WManager->window,
        WManager->bg->sprite, NULL);
        sfRenderWindow_drawSprite(WManager->window,
        WManager->duck->sprite, NULL);
        sfSprite_setPosition(WManager->duck->sprite, WManager->duck_v);
        move_duck(WManager);
        animate_sprite(WManager->duck->sprite, &WManager->duck->rect,
        WManager->cl_duck->clock);
        sfRenderWindow_display(WManager->window);
    }
}
