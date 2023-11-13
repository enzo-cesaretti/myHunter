/*
** EPITECH PROJECT, 2022
** LOAD
** File description:
** Load all objets
*/

#include "my.h"

void load_assets(WManager_t *WManager)
{
    WManager->bg->texture = sfTexture_createFromFile(BG_TEXTURE, NULL);
    WManager->bg->sprite = sfSprite_create();
    WManager->duck->texture = sfTexture_createFromFile(DUCK_TEXTURE, NULL);
    WManager->duck->sprite = sfSprite_create();
    WManager->duck->rect.top = 0;
    WManager->duck->rect.left = 0;
    WManager->duck->rect.width = 110;
    WManager->duck->rect.height = 110;
    sfSprite_setTexture(WManager->bg->sprite,
    WManager->bg->texture, sfTrue);
    sfSprite_setTexture(WManager->duck->sprite,
    WManager->duck->texture, sfTrue);
    sfSprite_setTextureRect(WManager->duck->sprite,
    WManager->duck->rect);
}

void load_clocks(WManager_t *WManager)
{
    WManager->cl_duck->clock = sfClock_create();
    WManager->cl_move_duck->clock = sfClock_create();
}

void load_vector(WManager_t *WManager)
{
    WManager->duck_v.x = 0;
    WManager->duck_v.y = 400;
}
