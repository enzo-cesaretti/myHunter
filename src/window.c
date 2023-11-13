/*
** EPITECH PROJECT, 2022
** WINDOW
** File description:
** All window function
*/

#include "my.h"

void create_window(WManager_t *WManager)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfUint32 style = sfResize | sfClose;
    WManager->window = sfRenderWindow_create(mode, "My Window", style, NULL);
    sfRenderWindow_setFramerateLimit(WManager->window, 30);
}
