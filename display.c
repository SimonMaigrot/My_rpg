/*
** EPITECH PROJECT, 2023
** My_rpg
** File description:
** display.c
*/

#include "my.h"

int display(window_t *window, menu_t *menu)
{
    sfRenderWindow_drawSprite(window->window, menu->background.sprite, NULL);
    sfRenderWindow_display(window->window);
    return 0;
}
