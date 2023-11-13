/*
** EPITECH PROJECT, 2022
** HELP
** File description:
** Help command
*/

#include "my.h"

void help(void)
{
    my_putstr("\033[0;32m _____        _____         _\n" );
    my_putstr("|     |_ _   |  |  |_ _ ___| |_ ___ ___\n");
    my_putstr("| | | | | |  |     | | |   |  _| -_|  _|\n");
    my_putstr("|_|_|_|_  |  |__|__|___|_|_|_| |___|_|\n");
    my_putstr("      |___|\033[0;37m\n");
    my_putstr("How to play ?\n\n");
    my_putstr("Each time you hit a duck, you earn 1 point\n");
    my_putstr("Your goal is to do the highest score possible !\n");
    my_putstr("Good luck and good game !");
    my_putchar('\n');
}
