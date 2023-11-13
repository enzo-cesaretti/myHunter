/*
** EPITECH PROJECT, 2022
** HEADER
** File description:
** Header
*/

#ifndef MY
    #define MY

    /*--LIB C--*/
    #include <unistd.h>
    #include <stdlib.h>

    /*--CSFML--*/
    #include <SFML/Graphics.h>
    #include <SFML/System/Clock.h>
    #include <SFML/System/Time.h>
    #include <SFML/System/Vector2.h>
    #include <SFML/System/Export.h>
    #include <SFML/System/Types.h>

    /*--LIB MY--*/
    #include "lib.h"

    /*--Game Struct--*/
    #include "game.h"

    /*TEXTURE PATHS*/
    #define BG_TEXTURE "./assets/background.jpg"
    #define DUCK_TEXTURE "./assets/duck_sprite.png"

void load_assets(WManager_t *WManager);
void load_clocks(WManager_t *WManager);
void load_vector(WManager_t *WManager);

void game_loop(WManager_t *WManager);

void create_window(WManager_t *WManager);

void event_handler(sfRenderWindow *window);

void animate_sprite(sfSprite *sprite, sfIntRect *rect, sfClock *clock);
void move_duck(WManager_t *WManager);
int hit_duck(WManager_t *WManager);

void change_coords(sfVector2f *vector, float x, float y);
void randomize_duck(WManager_t *WManager);

void help(void);
void dev_mode(WManager_t *WManager);

#endif /* !MY */
