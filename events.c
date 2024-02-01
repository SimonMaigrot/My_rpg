/*
** EPITECH PROJECT, 2023
** My_rpg
** File description:
** events.c
*/

#include "my.h"

int events(window_t *window)
{
    while (sfRenderWindow_pollEvent(window->window, &window->event)) {
        switch (window->event.type) {
            case sfEvtClosed:
                sfRenderWindow_close(window->window);
                break;
            default:
                break;
        }
    }
    return 0;
}
