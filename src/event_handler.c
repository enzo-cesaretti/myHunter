/*
** EPITECH PROJECT, 2022
** EVENT_HANDLER
** File description:
** Handle all event
*/

#include "my.h"
#include "game.h"

void event_handler(sfRenderWindow *window)
{
    sfEvent event;
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
    }
}
