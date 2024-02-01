/*
** EPITECH PROJECT, 2023
** My_rpg
** File description:
** loop.c
*/

#include "my.h"

int loop(window_t *window, menu_t *menu)
{
    while (sfRenderWindow_isOpen(window->window)) {
        sfRenderWindow_clear(window->window, sfBlack);
        events(window);
        display(window, menu);
    }
    return 0;
}