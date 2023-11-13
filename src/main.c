/*
** EPITECH PROJECT, 2022
** MAIN
** File description:
** Main
*/

#include "my.h"
#include "game.h"

void destroy(WManager_t *WManager)
{
    sfTexture_destroy(WManager->bg->texture);
    sfSprite_destroy(WManager->bg->sprite);
    sfTexture_destroy(WManager->duck->texture);
    sfSprite_destroy(WManager->duck->sprite);
    sfClock_destroy(WManager->cl_duck->clock);
    sfClock_destroy(WManager->cl_move_duck->clock);
    sfRenderWindow_destroy(WManager->window);
}

void allocate_struct(WManager_t *WManager)
{
    WManager->score = 0;
    WManager->bg = malloc(sizeof(element_t));
    WManager->duck = malloc(sizeof(element_t));
    WManager->cl_duck = malloc(sizeof(Clock_t));
    WManager->cl_move_duck = malloc(sizeof(Clock_t));
}

void display_score(WManager_t *WManager)
{
    my_putstr("Good job !\n");
    my_putstr("Your score is ");
    my_put_nbr(WManager->score);
    my_putchar('\n');
}

int main(int argc, char **argv)
{
    if (argc == 2 && (argv[1][0] == '-' && argv[1][1] == 'h')) {
        help();
    } else if (argc == 2 && (argv[1][0] != '-' || argv[1][1] != 'h')) {
        write(2, "Unknow argument(s)\n", 20);
        write(2, "=> ./my_hunter -h for more information\n", 40);
        return 84;
    } else {
        WManager_t WManager;
        allocate_struct(&WManager);
        create_window(&WManager);
        load_assets(&WManager);
        load_clocks(&WManager);
        load_vector(&WManager);
        game_loop(&WManager);
        display_score(&WManager);
        destroy(&WManager);
    }
    return 0;
}
