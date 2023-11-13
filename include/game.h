/*
** EPITECH PROJECT, 2022
** GAME
** File description:
** GAME
*/

#ifndef GAME
    #define GAME
    #include "my.h"

typedef struct s_element {
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect rect;
} element_t;

typedef struct s_Clock {
    sfClock *clock;
    sfTime time;
} Clock_t;

typedef struct s_WManager {
    int score;

    sfRenderWindow *window;
    Clock_t *cl_duck;
    Clock_t *cl_move_duck;
    sfVector2f duck_v;
    element_t *bg;
    element_t *duck;
} WManager_t;

#endif /* !GAME */
